import rclpy 
from rclpy.node import Node
from cv_bridge import CvBridge
import cv2


class Detection(Node):

    def __init__(self):
        super().__init__("Detector node initialzed")

        #convertor tool 
        self.br = CvBridge()
        self.subscription = self.create_subscription(
            Image, 
            '/image_raw',
            self.listener_callback,
            10
        )
        self.bridge = CvBridge()
        self.get_logger().info("Image subscriber started")

    def listener_callback(self, msg):
        try :
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='rgb8')

            #displaying the message
            cv2.imshow("Camera feed",frame)
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




