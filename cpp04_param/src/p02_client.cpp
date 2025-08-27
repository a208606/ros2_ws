#include <memory>
#include <rclcpp/executors.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/node_options.hpp>
#include <rclcpp/parameter_client.hpp>
#include <rclcpp/utilities.hpp>
#include <string>
#include <sys/types.h>

using namespace std::chrono_literals;

class ParamClient : public rclcpp::Node {
  using pt = rclcpp::Parameter;

  rclcpp::SyncParametersClient::SharedPtr client_;

public:
  // 初始化
  ParamClient() : Node("Param_Client") {
    RCLCPP_INFO(get_logger(), "初始化客户端");
    // 初始化客户端
    client_ =
        std::make_shared<rclcpp::SyncParametersClient>(this, "Param_Server");
  }

  // 连接
  bool connct() {
    RCLCPP_INFO(get_logger(), "开始连接");
    while (!client_->wait_for_service(2s)) {
      if (!rclcpp::ok()) {
        RCLCPP_INFO(get_logger(), "连接强制断开");
        return false;
      }
      RCLCPP_INFO(get_logger(), "连接中 ....");
    }
    return true;
  }

  // 查询
  void get_parameter() {

    // 查询单个参数
    auto p = client_->get_parameter<double>("巍峨");
    RCLCPP_INFO(get_logger(), "获取 参数: key = 巍峨 value = %.4f", p);

    auto p2 = client_->get_parameter<int32_t>("length");
    RCLCPP_INFO(get_logger(), "获取 参数: key = length value = %d ", p2);
    // 查询多个参数

    // 查询参数是否存在
  };

  // 更改
  void set_parameter() {
    RCLCPP_INFO(get_logger(), " 更改参数");
    client_->set_parameters({pt("length", 18), pt("巍峨", 1.8)});
  };
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  auto pc = std::make_shared<ParamClient>();

  if (!pc->connct()) {
    return 0;
  }

  pc->get_parameter();
  pc->set_parameter();
  pc->get_parameter();

  rclcpp::spin(pc);
  rclcpp::shutdown();
  return 0;
}
