#include <rcl/time.h>
#include <rclcpp/executors.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/parameter.hpp>
#include <rclcpp/parameter_value.hpp>

class Param : public rclcpp::Node {

public:
  Param() : Node("Param") {
    RCLCPP_INFO(get_logger(), "参数通信");

    rclcpp::Parameter p1("name", "火龙果");
    rclcpp::Parameter p2("height", 1.88);
    rclcpp::Parameter p3("age", 8);

    // 获取 value

    RCLCPP_INFO(get_logger(), "参数通信:%s", p1.value_to_string().c_str());
    RCLCPP_INFO(get_logger(), "参数通信%.2f", p2.as_double());
    RCLCPP_INFO(get_logger(), "参数通信:%ld", p3.as_int());

    // 获取 key
    RCLCPP_INFO(get_logger(), "name=:%s", p1.get_name().c_str());
    RCLCPP_INFO(get_logger(), "name_type=:%s", p1.get_type_name().c_str());
    RCLCPP_INFO(get_logger(), "value_=:%s", p2.value_to_string().c_str());
  };
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<Param>());

  rclcpp::shutdown();
  return 0;
}
