import rclpy 
from rclpy.node import Node
from cv_bridge import CvBridge
from face_msgs.msg import FaceDetections,Face, FaceEmbeddingArray
from enum import Enum
import numpy as np
import yaml
from pathlib import Path
from ament_index_python.packages import get_package_share_directory

class TrackState(Enum):
    TENTATIVE = 0
    CONFIRMED = 1

def cosine_similarity(a, b):
    return np.dot(a, b) / (np.linalg.norm(a) * np.linalg.norm(b))

def iou(b1, b2):
    """
    Compute Intersection over Union (IoU) between two
    vision_msgs/Detection2D bounding boxes.
    """

    # Converting b1 to corners
    b1_x1 = b1.center.x - b1.size_x / 2.0
    b1_y1 = b1.center.y - b1.size_y / 2.0
    b1_x2 = b1.center.x + b1.size_x / 2.0
    b1_y2 = b1.center.y + b1.size_y / 2.0

    # Converting b2 to corners
    b2_x1 = b2.center.x - b2.size_x / 2.0
    b2_y1 = b2.center.y - b2.size_y / 2.0
    b2_x2 = b2.center.x + b2.size_x / 2.0
    b2_y2 = b2.center.y + b2.size_y / 2.0

    # Creating the intersection rectangle
    inter_x1 = max(b1_x1, b2_x1)
    inter_y1 = max(b1_y1, b2_y1)
    inter_x2 = min(b1_x2, b2_x2)
    inter_y2 = min(b1_y2, b2_y2)

    inter_w = max(0.0, inter_x2 - inter_x1)
    inter_h = max(0.0, inter_y2 - inter_y1)
    inter_area = inter_w * inter_h

    # Areas of the bounding boxes
    area_b1 = b1.size_x * b1.size_y
    area_b2 = b2.size_x * b2.size_y

    union_area = area_b1 + area_b2 - inter_area

    if union_area == 0:
        return 0.0

    return inter_area / union_area

def load_embeddings(path):

    with open(path, "r") as f:
        raw = yaml.safe_load(f)

    embeddings_dict = {}
    for name, emb in raw.items():
        embeddings_dict[name] = np.array(emb, dtype=np.float32)

    return embeddings_dict

def best_similarity(reference_embedding, embeddings_list):

    best_sim = -1
    similar_emb = np.array([],dtype=np.float32)

    for emb in embeddings_list.values():
        sim = cosine_similarity(reference_embedding, emb)
        if sim > 0.5 and sim > best_sim:
            best_sim = sim
            similar_emb = emb
    return similar_emb

    
class Track:
    def __init__(self, track_id, detection, embedding, frame_id):
        # the identifier of the track, different tracks -> different_ids
        self.track_id = track_id
        # last bounding box corresponding to this frame
        self.last_detection = detection.bbox 
        # the sliding window based on which we collect evidence and compute running metrics
        self.window_similarity = []
        # the embedding on which we build this frame, for investigation
        self.reference_embedding = embedding
        # last time we added evidence to this track , last frame, we added evidence
        self.last_seen_frame = frame_id
        # the current state of this track, whether identity confirmed or not
        self.state = TrackState.TENTATIVE


class Tracking_node(Node):

    def __init__(self):

        super().__init__("Tracking_node_initialized")
        
        # subscribing to the '/face_embeddings' to retrieve the face embeddings
        self.subscription = self.create_subscription(
            FaceEmbeddingArray,
            '/face_embeddings',
            self.listener_callback,
            10
         )
        
        self.get_logger().info("Tracking node initialized")
        self.br = CvBridge()

        # initially 0 tracks(hypothesis) under consideration
        self.next_track_id = 0
        # list of tracks under investigation -> inittially 0, dictionary : 
        self.tracks = {}
        # number of frames since we started investigating the current track
        self.nr_frames = 0
        pkg_share = get_package_share_directory('yolo_face_recognition')
        config_path = Path(pkg_share) / 'config' / 'faces.yaml'
        self.embeddings_reference = load_embeddings(config_path)
    
    def listener_callback(self, msg):

        faces_detected = msg.faces
        self.nr_frames += 1

        # First we check all the detected faces within the frame against all tracks under investigation. Each face will be assigned to the most compatible track for which 
        # we gather evidence. The same face will never update 2 different tracks, because that would mean that this face occupies 2 different positions simultaneously 

        for face in faces_detected:
            used_tracks = set()
            best_track = None
            best_sim = 0.0
            for track in self.tracks.values():

                #first we compute the bounding box overlap 
                if iou(face.detection.bbox, track.detection) < 0.3:
                    continue

                sim = cosine_similarity(track.reference_embedding, face.embedding)
                if sim > 0.5 and sim > best_sim:
                    best_track = track
                    best_sim = sim 
            
            if best_track:
                # if window slide is full eliminate one of the ends and slide to the next frame
                if len(best_track.window_similarity) > 10:
                    best_track.window_similarity.pop(0)
                # updating the hypothesis
                best_track.window_similarity.append(best_sim)
                best_track.last_detection = face.bbox
                best_track.last_seen_frame = self.nr_frames
                # track is updated at most once per frame, updating the same frame twice means that its location and embeding is found in two different spots simultaenously
                used_tracks.add(best_track.track_id)
                self.check_confirmation(best_track)
            
            else:
                # here we basically create the tracks with the seed, as we want just the recorded faces to be tracked, we could also track any new face and track it
                emb_similar = best_similarity(face.embedding, self.embeddings_reference)
                if emb_similar > 0:
                    self.create_track(face.detection, emb_similar)
            
        self.cleanup_tracks()
    
    def check_confirmation(self,track):
        if len(track.window_similarity) >= 5:
            mean = np.mean(track.window_similarity)
            standard_dev = np.std(track.window_similarity)
            if mean > 0.7 and standard_dev < 0.05:
                track.state = TrackState.CONFIRMED
    
    def create_track(self,detection, embedding):
        t = Track (
            self.next_track_id,
            detection,
            embedding,
            self.nr_frames
        )
        self.tracks[self.next_track_id] = t
        self.next_track_id += 1

    def cleanup_tracks(self):
        expired_tracks = [tid for tid, t in self.tracks.items() if self.nr_frames - t.last_seen_frame > 5]
        for tid in expired_tracks:
            del self.tracks[tid]


def main(args=None):

    rclpy.init(args=args)
    node = Tracking_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


