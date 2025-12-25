import rclpy 
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import cv2
from face_msgs.msg import FaceDetections
import torch
from facenet_pytorch import InceptionResnetV1
from torchvision import transforms
from PIL import Image


class Embedding_node(Node):

    def __init__(self):

        super().__init__("Embedding_node_initialized")
        self.br = CvBridge()

        #subscribing to the detector_node to retrive the frame and the detections
        self.subscription = self.create_subscription(
            FaceDetections,
            '/face_detections', 
            self.listener_callback, 
            10
        )
        
        self.device = 'cudo' if torch.cude.is_available() else 'cpu'

        self.model = InceptionResnetV1(
            pretrained='vggface2'
        ).eval().to(self.device)

        self.preprocess = transforms.Compose([
            transforms.Resize((160, 160)),
            transforms.ToTensor(),
            transforms.Normalize([0.5]*3, [0.5]*3)
        ])

        self.get_logger().info("Image subscriber started")
    
    def listener_callback(self, msg):

        # retriving the header
        stamp = msg.header.stamp
        frame_id = msg.header.frame_id

        frame = self.br.imgmsg_to_cv2(msg.image, desired_encoding='rgb8')

        detections = msg.detections.detections
        embeddings = []
        for det in detections:

            box = det.bbox

            c_x, c_y = int(box.center.x), int(box.center.y)
            w, h = int(box.size_x), int(box.size_y)

            face = frame[
                c_y - h//2 : c_y + h//2,
                c_x - w//2 : c_x + w//2
            ]

            if face.size == 0:
                continue

            face_pil = Image.fromarray(face)
            face_tensor = self.preprocess(face_pil).unsqueeze(0).to(self.device)


            # applying the model to generate the embedding
            with torch.no_grad():
                embedding = self.model(face_tensor)
            embeddings.append(embedding.squeeze(0).detach().cpu())

            self.get_logger().info(f"Embedding generated: {embedding.shape}")


 






