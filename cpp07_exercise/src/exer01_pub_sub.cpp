#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"
#include "turtlesim_msgs/msg/pose.hpp"

using geometry_msgs::msg::Twist;
using turtlesim_msgs::msg::Pose;

class Exer01_pub_sub : public rclcpp::Node {

  // 订阅
  rclcpp::Subscription<Pose>::SharedPtr sub_;
  // 发布
  rclcpp::Publisher<Twist>::SharedPtr pub_;

public:
  Exer01_pub_sub() : Node("exer01") {
    RCLCPP_INFO(get_logger(), "初始化订货发布");

    // 创建发布者
    pub_ = this->create_publisher<Twist>("/t2/turtle1/cmd_vel", 10);

    // 创建订阅者
    sub_ = this->create_subscription<Pose>(
        "/turtle1/pose", 10,
        std::bind(&Exer01_pub_sub::pose_callback, this, std::placeholders::_1));
  }

private:
  void pose_callback(const Pose::SharedPtr msg) {

    auto twist_msg = geometry_msgs::msg::Twist();
    // 线速度
    twist_msg.linear.x = msg->linear_velocity; // 向前移动
    // 角速度
    twist_msg.angular.z = -msg->angular_velocity;

    pub_->publish(twist_msg);
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<Exer01_pub_sub>());

  rclcpp::shutdown();
  return 0;
}
