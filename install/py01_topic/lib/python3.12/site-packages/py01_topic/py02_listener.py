import rclpy
from rclpy.node import Node
from base_interfase.msg import Student


class listener(Node):
    def __init__(self):
        super().__init__("py02_listener")
        self.get_logger().info("订阅者")
        self.sub = self.create_subscription(Student, "chat", self.do_callBack, 10)

    def do_callBack(self, msg):
        self.get_logger().info(
            "py 定时发送消息：%s , %d ,  %.2f" % (msg.name, msg.age, msg.height)
        )


def main():
    rclpy.init()
    rclpy.spin(listener())
    rclpy.shutdown()


if __name__ == "__main__":
    main()
