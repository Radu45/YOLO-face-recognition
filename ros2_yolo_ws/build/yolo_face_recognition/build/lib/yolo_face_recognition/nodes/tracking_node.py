import rclpy 
from rclpy.node import Node
from cv_bridge import CvBridge
from face_msgs.msg import FaceDetections,Face, FaceEmbeddingArray
from enum import Enum
import numpy as np
import yaml
from pathlib import Path
from ament_index_python.packages import get_package_share_directory
import cv2

class TrackState(Enum):
    TENTATIVE = 0
    CONFIRMED = 1

def cosine_similarity(a, b):
    return np.dot(a, b) / (np.linalg.norm(a) * np.linalg.norm(b))

# Intersection over union 
def iou(b1, b2):

    # Intersection over union, as frames are recorded at a speed of 30 frames/s, a physical instance does not have time to move far away from the previous frame.
    # We compare the current face detection with the last detection registered for the corresponding frame by seing hoe much they overlap (the resulted rectangle through overlap) 


    # Converting b1 to corners
    b1_x1 = b1.center.position.x - b1.size_x / 2.0
    b1_y1 = b1.center.position.y - b1.size_y / 2.0
    b1_x2 = b1.center.position.x + b1.size_x / 2.0
    b1_y2 = b1.center.position.y + b1.size_y / 2.0

    # Converting b2 to corners
    b2_x1 = b2.center.position.x - b2.size_x / 2.0
    b2_y1 = b2.center.position.y - b2.size_y / 2.0
    b2_x2 = b2.center.position.x + b2.size_x / 2.0
    b2_y2 = b2.center.position.y + b2.size_y / 2.0

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
        emb =  np.array(emb, dtype=np.float32)
        emb = emb / np.linalg.norm(emb)
        embeddings_dict[name] = emb

    return embeddings_dict

def load_params(path):

    with open(path, "r") as f:
        raw = yaml.safe_load(f)
    
    box_overlapping_iou = raw["box_overlap"]
    length_window = raw["window_length"]
    similarity = raw["sim_reference"]
    mean = raw["mean"]
    std = raw["std"]
    skipped_frames = raw["skipped_frames"]

    return box_overlapping_iou, length_window, similarity, mean, std, skipped_frames


def best_similarity(reference_embedding, embeddings_list):

    best_sim = -1
    best_name = None
    SIM_REF = 0.5

    for name,emb in embeddings_list.items():
        sim = cosine_similarity(reference_embedding, emb)
        if sim > SIM_REF and sim > best_sim:
            best_sim = sim
            best_name = name
    return best_sim, best_name

    
class Track:
    def __init__(self, track_id, detection, init_embedding, reference_embedding, frame_id):
        # the identifier of the track, different tracks -> different_ids
        self.track_id = track_id
        # last bounding box corresponding to this frame
        self.last_detection = detection 
        # the sliding window based on which we collect evidence and compute running metrics
        self.window_similarity = []
        # reference_embedding is used for identity confirmation in the sliding window
        self.reference_embedding = reference_embedding
        # init_embedding keeps track of how the embeddings 
        self.track_embedding = init_embedding.copy() # keeps track how the embeddings evolve with frames
        self.track_embedding /= np.linalg.norm(self.track_embedding)
        # last time we added evidence to this track , last frame, we added evidence
        self.last_seen_frame = frame_id
        # the current state of this track, whether identity confirmed or not
        self.state = TrackState.TENTATIVE
        # label(string) denoting the reference identify
        self.label = "unknown" # hypothesis
        # candidate name -> identity we want to investigate
        self.candidate_name = None


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
        config_path_faces = Path(pkg_share) / 'config' / 'faces.yaml'
        self.embeddings_reference = load_embeddings(config_path_faces)
        config_path_params = Path(pkg_share) / 'config' / 'params.yaml'
        self.box_overlap_iou, self.window_length, self.sim_reference_standard, self.mean, self.std, self.skipped_frames = load_params(config_path_params)


    
    def listener_callback(self, msg):

        faces_detected = msg.faces
        self.nr_frames += 1
        frame = self.br.imgmsg_to_cv2(msg.image, desired_encoding='rgb8')
        # assigning the faces to tracks and gathering evidence that supports the reference_embedding
        self.track_faces(faces_detected)
        # draw tracks over the frame to display the state of each track
        self.draw_tracks(frame)
        # giving up inactive tracks
        self.cleanup_tracks()
    
    def draw_tracks(self, frame):
        # looping through all tracks and inserting them into the frame based on their state
        for track in self.tracks.values():
            self.draw_track(frame, track)

        cv2.imshow("Tracking", frame)
        cv2.waitKey(1)
    
    def track_faces(self, faces_detected):

        # First we check all the detected faces within the frame against all tracks under investigation. Each face will be assigned to the most compatible track for which 
        # we gather evidence. The same face will never update 2 different tracks, because that would mean that this face occupies 2 different positions simultaneously 
        alpha = 0.9
        used_tracks = set()
        for face in faces_detected:
            best_track = None
            face_emb = np.array(face.embedding,dtype=np.float32 )
            face_emb = face_emb / np.linalg.norm(face_emb)
            best_sim = 0.0
            for track in self.tracks.values():

                if track.track_id in used_tracks:
                    continue

                #first we compute the bounding box overlap 
                if iou(face.detection.bbox, track.last_detection) < self.box_overlap_iou:
                    continue

                sim = cosine_similarity(track.track_embedding, face_emb)
                if sim > self.sim_reference_standard and sim > best_sim:
                    best_track = track
                    best_sim = sim 
            
            if best_track:
                # computing the similarity between the current state of the embedding with the reference embedding (used for identity confirmation)
                sim_ref = cosine_similarity(best_track.track_embedding, best_track.reference_embedding)
                # if window slide is full eliminate one of the ends and slide to the next frame
                best_track.window_similarity.append(sim_ref)
                if len(best_track.window_similarity) > self.window_length:
                    best_track.window_similarity.pop(0)
                # updating the hypothesis
                if sim_ref > self.sim_reference_standard:
                    best_track.track_embedding = (
                       alpha * best_track.track_embedding + 
                       (1 - alpha) * face_emb
                    )
                    best_track.track_embedding /= np.linalg.norm(best_track.track_embedding)

                best_track.last_detection = face.detection.bbox
                best_track.last_seen_frame = self.nr_frames
                # track is updated at most once per frame, updating the same frame twice means that its location and embedding is found in two different spots simultaneously
                used_tracks.add(best_track.track_id)
                self.check_confirmation(best_track)
            
            else:
                # here we basically create the tracks with the seed, as we want just the recorded faces to be tracked, we could also track any new face and track it
                sim, name = best_similarity(face_emb, self.embeddings_reference)
                if sim > 0.0:
                    emb_similar = self.embeddings_reference[name]
                    self.create_track(face.detection.bbox, face_emb, emb_similar,name)




    def check_confirmation(self,track):
        if len(track.window_similarity) >= self.skipped_frames:
            mean = np.mean(track.window_similarity)
            standard_dev = np.std(track.window_similarity)
            if mean > self.mean and standard_dev < self.std:
                track.state = TrackState.CONFIRMED
                track.label = track.candidate_name
    
    def draw_track(self, frame, track):
        bbox = track.last_detection

        x1 = int(bbox.center.position.x - bbox.size_x /2)
        y1 = int(bbox.center.position.y - bbox.size_y /2)
        x2 = int(bbox.center.position.x + bbox.size_x /2)
        y2 = int(bbox.center.position.y + bbox.size_y /2)

        color = (0,255,0) if track.state == TrackState.CONFIRMED else (0,255,255)
        label = track.label if track.state == TrackState.CONFIRMED else f"{track.candidate_name}?"

        cv2.rectangle(frame, (x1, y1), (x2, y2), color, 2)
        if track.state == TrackState.CONFIRMED:
            cv2.putText(
                frame,
                label,
                (x1, y1 - 10),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.6,
                color,
                2
            )
        
    
    def create_track(self,detection, init_embedding, reference_embedding, name):
        t = Track (
            self.next_track_id,
            detection,
            init_embedding,
            reference_embedding,
            self.nr_frames,
        )
        t.candidate_name = name
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


