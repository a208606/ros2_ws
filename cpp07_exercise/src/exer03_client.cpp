#include <memory>

#include "base_interfase/srv/distance.hpp"
#include "rclcpp/rclcpp.hpp"

using base_interfase::srv::Distance;
using namespace std::chrono_literals;

class exerClient : public rclcpp::Node {

  rclcpp::Client<Distance>::SharedPtr client_;

public:
  // 初始化 客户端
  exerClient() : Node("dis_client") {

    RCLCPP_INFO(this->get_logger(), "启动客户端");
    client_ = this->create_client<Distance>("Distance");
  }

  // 检查连接 是否成功
  bool connect() {
    while (!client_->wait_for_service(2s)) {
      if (rclcpp::ok()) {
        RCLCPP_WARN(this->get_logger(), "连接被打断");
        return false;
      }
      RCLCPP_INFO(this->get_logger(), "连接 中 。。。");
    }
    return true;
  }

  rclcpp::Client<Distance>::FutureAndRequestId send_goal(float x, float y,
                                                         float thera) {
    RCLCPP_INFO(this->get_logger(), "发送数据");

    auto requsest = std::make_shared<Distance::Request>();
    requsest->set__theta(thera);
    requsest->set__x(x);
    requsest->set__y(y);

    return client_->async_send_request(requsest);
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  if (argc < 5) {
    RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "参数错误：%d", argc);
    return -1;
  }

  float x = atof(argv[1]);
  float y = atof(argv[2]);
  float thera = atof(argv[3]);

  auto client = std::make_shared<exerClient>();

  auto flag = client->connect();

  if (!flag) {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "连接失败");
    return -1;
  }

  auto resp = client->send_goal(x, y, thera);
  if (rclcpp::spin_until_future_complete(client, resp) ==
      rclcpp::FutureReturnCode::SUCCESS) {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "距离%.2f", resp.get()->distance);
  } else {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "发送失败");
  }

  rclcpp::shutdown();
  return 0;
}
