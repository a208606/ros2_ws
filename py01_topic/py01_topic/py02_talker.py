import rclpy
from rclpy.node import Node
from base_interfase.msg import Student


class Talker(Node):
    def __init__(self):
        self.count = 0

        super().__init__("py02_talker")
        self.get_logger().info("py 发布")
        # 创建发布者
        self.pub = self.create_publisher(Student, "chat", 10)

        # 设置定时器
        self.timer = self.create_timer(1.0, self.on_CallBack)

    def on_CallBack(self):
        self.count += 1
        # 发送消息
        msg = Student()
        msg.name = "凹凸慢"
        msg.age = self.count
        msg.height = 1.44

        self.get_logger().info("py 定时发送消息：%s , %d , %.2f" % (msg.name,msg.age,msg.height))
        self.pub.publish(msg)


def main():
    rclpy.init()
    rclpy.spin(Talker())
    rclpy.shutdown()


if __name__ == "__main__":
    main()
