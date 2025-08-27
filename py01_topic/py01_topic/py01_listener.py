import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class listener(Node):
    def __init__(self):
        super().__init__("py_listener")
        self.get_logger().info("订阅者")
        self.sub = self.create_subscription(String, "chat", self.do_callBack, 10)

    def do_callBack(self, msg):
        self.get_logger().info(msg.data)

def main():
    rclpy.init()
    rclpy.spin(listener())
    rclpy.shutdown()


if __name__ == "__main__":
    main()
