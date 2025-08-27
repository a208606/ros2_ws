
#include <memory>
#include <rclcpp/executors.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/node_options.hpp>
#include <rclcpp/parameter.hpp>
#include <rclcpp/visibility_control.hpp>

class ParamServer : public rclcpp::Node {

public:
  ParamServer()
      : Node("Param_Server",
             rclcpp::NodeOptions().allow_undeclared_parameters(true)) {
    // 创建参数通信
    RCLCPP_INFO(this->get_logger(), "创建参数通信");
  };

  using pt = rclcpp::Parameter;

  // 添加
  void add_Param() {
    RCLCPP_INFO(this->get_logger(), "--------添加--------");

    // declare 不能被删除
    this->declare_parameter("che", "车");
    this->declare_parameter("length", 17);
    this->declare_parameter("with", 12.99);

    // set 的值可以被删除
    this->set_parameter(pt("weight", 14.8));
  };

  // 查询
  void check_Param() {
    RCLCPP_INFO(this->get_logger(), "--------查询--------");
    auto resp = this->get_parameter("che");

    RCLCPP_INFO(this->get_logger(), "查询:%s = %s", resp.get_name().c_str(),
                resp.value_to_string().c_str());
    auto bo = this->has_parameter("巍峨");
    RCLCPP_INFO(this->get_logger(), "查询  key = 巍峨:%d", bo);
  };

  // 更新
  void update_Param() {
    RCLCPP_INFO(this->get_logger(), "--------修改--------");
    this->set_parameter(pt("巍峨", 14.8));
  };

  // 删除
  void delete_Param() {
    RCLCPP_INFO(this->get_logger(), "--------删除--------");
    this->undeclare_parameter("weight");
    auto bo = this->has_parameter("weight");
    RCLCPP_INFO(this->get_logger(), "删除:%d", bo);
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  auto p = std::make_shared<ParamServer>();

  p->add_Param();
  p->check_Param();
  p->update_Param();
  p->delete_Param();

  p->check_Param();

  rclcpp::spin(p);
  rclcpp::shutdown();
  return 0;
}
