import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Talker(Node):
    def __init__(self):
        self.count = 0

        super().__init__("py01_talker")
        self.get_logger().info("py 发布")
        # 创建发布者
        self.pub = self.create_publisher(String, "chat", 10)

        # 设置定时器
        self.timer = self.create_timer(1.0, self.on_CallBack)

    def on_CallBack(self):
        self.count += 1
        # 发送消息
        msg = String()
        msg.data = "你好世界:" + str(self.count)

        self.get_logger().info("py 定时发送消息：%s" % msg.data)
        self.pub.publish(msg)


def main():
    rclpy.init()
    rclpy.spin(Talker())
    rclpy.shutdown()


if __name__ == "__main__":
    main()
