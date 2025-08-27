#include "std_msgs/msg/string.hpp"
#include <rclcpp/rclcpp.hpp>

using namespace std_msgs;
using namespace std::chrono_literals;

class Talker : public rclcpp::Node {

  /* data */

  rclcpp::Publisher<msg::String>::SharedPtr Publisher_;
  rclcpp::TimerBase::SharedPtr Timer_;
  size_t count;

  void on_Timer() {
    auto msg = msg::String();
    msg.data = "世界 你好" + std::to_string(count += 1);
    RCLCPP_INFO(this->get_logger(), "定时发送消息: %s", msg.data.c_str());

    Publisher_->publish(msg);
  };

public:
  Talker() : Node("cpp01_talker") {
    RCLCPP_INFO(this->get_logger(), "创建发送者");
    // 初始化消息队列 QOS 10
    Publisher_ = this->create_publisher<msg::String>("chat", 10);
    // 创建定时器
    Timer_ = this->create_wall_timer(1s, std::bind(&Talker::on_Timer, this));

    // 发送消息
    // on_Timer 是一个回调函数
  };
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<Talker>());

  rclcpp::shutdown();
  return 0;
}
