#include "base_interfase/msg/student.hpp"
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;
using base_interfase::msg::Student;

class Talker : public rclcpp::Node {
private:
  /* data */

  rclcpp::Publisher<Student>::SharedPtr Publisher_;
  rclcpp::TimerBase::SharedPtr Timer_;
  size_t count;

  void on_Timer() {
    auto msg = Student();
    msg.name = "葫芦娃";
    msg.age = count += 1;
    msg.height = 1.99;

    RCLCPP_INFO(get_logger(), "接收到订阅消息 name:%s , age:%d height:%.2f",
                msg.name.c_str(), msg.age, msg.height);

    Publisher_->publish(msg);
  };

public:
  Talker() : Node("cpp03_talker") {
    RCLCPP_INFO(this->get_logger(), "创建发送者");
    // 初始化消息队列 QOS 10
    Publisher_ = this->create_publisher<Student>("chat", 10);
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
