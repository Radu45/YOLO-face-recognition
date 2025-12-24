import rclpy 
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
import cv2
import cvzone
from ultralytics import YOLO
from ament_index_python.packages import get_package_share_directory
from vision_msgs.msg import Detection2D, Detection2DArray
from face_msgs.msg import FaceDetections
from pathlib import Path


class Detection(Node):

    def __init__(self):
        super().__init__("Detector_node_initialzed")

        #convertor tool 
        self.br = CvBridge()
        self.subscription = self.create_subscription(
            Image, 
            '/camera/image_raw',
            self.listener_callback,
            10
        )
        self.publisher = self.create_publisher(FaceDetections, '/face_detections',10)
        # loading the face detection model taken from https://github.com/YapaLab/yolo-face?tab=readme-ov-file
        pkg_share = get_package_share_directory('yolo_face_recognition')
        model_path  = Path(pkg_share) / 'models' / 'yolov12n-face.pt'
        self.facemodel = YOLO(model_path)
        self.bridge = CvBridge()
        self.get_logger().info("Image subscriber started")


    def listener_callback(self, msg):
        try :
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='rgb8')
            face_result_params = self.facemodel.predict(frame, conf=0.50)

            # array containing the detections
            detection_faces = Detection2DArray()
            detection_faces.header = msg.header
            for info in face_result_params:
                boxes_detections = info.boxes
                for box in boxes_detections:
                    face_detected = Detection2D()
                    x1,y1,x2,y2 = box.xyxy[0]
                    x1, y1, x2, y2 = int(x1), int(y1), int(x2), int(y2)
                    h, w = y2-y1,x2-x1
                    face_detected.bbox.center.x = (x1 + x2) /2.0
                    face_detected.bbox.center.y = (y1 + y2) /2.0
                    face_detected.bbox.size_x = float(w)
                    face_detected.bbox.size_y = float(h)
                    detection_faces.detections.append(face_detected)
                    #cvzone.cornerRect(frame, [x1,y1,w,h], l=9, rt=3)
            #cv2.imshow('frame', frame)
            # initializing the custom message that we just created that stores the original image together with all detections within it
            out_msg = FaceDetections()
            out_msg.header = msg.header
            # converting frame to msg format to be sent over the topic
            out_msg.image = self.bridge.cv2_to_imgmsg(frame,desired_encoding='rgb8')
            out_msg.detections = detection_faces
            # publishing the image 
            self.publisher.publish(out_msg)


            cv2.waitKey(1)

        
        except Exception as e:
            self.get_logger().error(f"Failed to process image {e}")


def main(args=None):

    rclpy.init(args=args)
    node = Detection()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()




