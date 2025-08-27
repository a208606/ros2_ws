#include <rclcpp/rclcpp.hpp>

#include "std_msgs/msg/string.hpp"

using namespace std_msgs;

class Listener : public rclcpp::Node {
private:
  /* data */
  rclcpp::Subscription<msg::String>::SharedPtr Subscription_;

  void callBack(const msg::String msg) const {
    RCLCPP_INFO(get_logger(), "接收到订阅消息: %s", msg.data.c_str());
  }

public:
  Listener() : Node("cpp02_Listener") {
    RCLCPP_INFO(this->get_logger(), "创建订阅");
    Subscription_ = this->create_subscription<msg::String>(
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