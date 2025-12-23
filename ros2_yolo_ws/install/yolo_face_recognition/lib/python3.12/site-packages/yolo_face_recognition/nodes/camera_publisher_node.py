import rclpy 
from rclpy.node import Node 
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import yaml
from pathlib import Path
from ament_index_python.packages import get_package_share_directory

class CameraPublisher(Node):

    def __init__(self):

        super().__init__('camera_publisher')

        self.br = CvBridge()
        pkg_share = get_package_share_directory('yolo_face_recognition')
        config_path = Path(pkg_share) / 'config' / 'config.yaml'
        with open(config_path, "r") as f:
            config = yaml.safe_load(f)
        camera_ip = config["camera_ip"]

        self.camera = cv2.VideoCapture(f"tcp://{camera_ip}:8080", cv2.CAP_FFMPEG)

        if not self.camera.isOpened():
            self.get_logger().error("Failed to open the camera")
            return 
        
        self.publisher = self.create_publisher(Image, '/camera/image_raw', 10)

        # timer_callback is called every 1/30 seconds
        self.timer = self.create_timer(1.0/30.0, self.timer_callback)
    
    def timer_callback(self):

        # ret is flag that signals whether a frame was read successfully
        ret, frame = self.camera.read()

        if not ret:
            self.get_logger().info("Frame not captured")
        
        # converting the frame to Image type that can be transmitted on the topic over the network 
        msg = self.br.cv2_to_imgmsg(frame, encoding='rgb8')
        # publishing the node on the '/camera/image_raw'
        self.publisher.publish(msg)
    
    def destroy_node(self):
        self.camera.release()
        super().destroy_node()

def main(args=None):

    rclpy.init(args=args)
    node = CameraPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    
