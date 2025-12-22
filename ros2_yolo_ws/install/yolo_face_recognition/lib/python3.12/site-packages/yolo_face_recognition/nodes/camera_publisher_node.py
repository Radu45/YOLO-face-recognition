import rclpy 
from rclpy.node import Node 
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraPublisher(Node):

    def __init__(self):

        super().__init__('camera_publisher')

        self.br = CvBridge()

        self.camera = cv2.VideoCapture("tcp://192.168.1.9:8080", cv2.CAP_FFMPEG)

        if not self.camera.isOpened():
            self.get_logger().error("Failed to open the camera")
            return 
        
        self.publisher = self.create_publisher(Image, '/camera/image_raw', 10)

        self.timer = self.create_timer(1.0/30.0, self.timer_callback)
    
    def timer_callback(self):

        ret, frame = self.camera.read()

        if not ret:
            self.get_logger().info("Frame not captured")
        

        msg = self.br.cv2_to_imgmsg(frame, encoding='rgb8')

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
    
