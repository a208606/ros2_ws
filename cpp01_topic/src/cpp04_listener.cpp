#include "base_interfase/msg/student.hpp"
#include <rclcpp/rclcpp.hpp>

using base_interfase::msg::Student;

class Listener : public rclcpp::Node {
private:
  /* data */
  rclcpp::Subscription<Student>::SharedPtr Subscription_;

  void callBack(Student msg) const {

    // 收到消息
    RCLCPP_INFO(get_logger(), "接收到订阅消息 name:%s , age:%d height:%.2f",
                msg.name.c_str(), msg.age, msg.height);
  }

public:
  Listener() : Node("cpp04_Listener") {

    RCLCPP_INFO(this->get_logger(), "创建订阅");

    Subscription_ = this->create_subscription<Student>(
        "chat", 10,
        std::bind(&Listener::callBack, this, std::placeholders::_1));
  };
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<Listener>());

  rclcpp::shutdown();

  return 0;
}