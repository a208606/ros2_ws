#include "base_interfase/srv/add_ints.hpp"
#include <cstdint>
#include <memory>
#include <rclcpp/client.hpp>
#include <rclcpp/executors.hpp>
#include <rclcpp/future_return_code.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/utilities.hpp>

using base_interfase::srv::AddInts;
using namespace std::chrono_literals;

class Client : public rclcpp::Node {

private:
  rclcpp::Client<AddInts>::SharedPtr client_;

public:
  // 初始化
  Client() : Node("cpp02_client") {
    RCLCPP_INFO(get_logger(), "创建 服务通信");
    client_ = this->create_client<AddInts>("add_int");
  };

  // 建立连接
  bool connct() {
    // 检查是否连接成功
    while (!client_->wait_for_service(2s)) {
      // 判断是否断开连接
      if (!rclcpp::ok()) {
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "连接强制退出");
        return false;
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "连接中 请稍后...");
    };

    return true;
  };

  // 发送数据
  rclcpp::Client<AddInts>::FutureAndRequestId Send_Req(int32_t num1,
                                                       int32_t num2) {
    auto request = std::make_shared<AddInts::Request>();

    // 赋值
    request->set__num1(num1);
    request->set__num2(num2);
    // 发送数据
    RCLCPP_INFO(get_logger(), "发送数据：%d,%d", request->num1, request->num2);
    return client_->async_send_request(request);
  }
};

int main(int argc, char *argv[]) {

  if (argc < 3) {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "传入的参数:%d", argc);
    return 0;
  }

  rclcpp::init(argc, argv);

  auto client = std::make_shared<Client>();

  if (!client->connct()) {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "连接失败 cpp02_client");
    return 0;
  }

  auto resp = client->Send_Req(atoi(argv[1]), atoi(argv[2]));

  if (rclcpp::spin_until_future_complete(client, resp) ==
      rclcpp::FutureReturnCode::SUCCESS) {
    RCLCPP_INFO(client->get_logger(), "请求成功");
    RCLCPP_INFO(client->get_logger(), "结果：%d", resp.get()->num);

  } else {

    RCLCPP_ERROR(client->get_logger(), "发送失败");
  }

  rclcpp::shutdown();
  return 0;
}
