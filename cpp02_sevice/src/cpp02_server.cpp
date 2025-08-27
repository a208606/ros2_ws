
#include "base_interfase/srv/add_ints.hpp"
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/service.hpp>

using base_interfase::srv::AddInts;
using std::placeholders::_1;
using std::placeholders::_2;

class Server : public rclcpp::Node {

private:
  rclcpp::Service<AddInts>::SharedPtr Service_;

  void add(AddInts::Request::SharedPtr req, AddInts::Response::SharedPtr resp) {

    resp->num = req->num1 + req->num2;
    
    RCLCPP_INFO(get_logger(), "收到请求: num1:%d + num2:%d = %d ", req->num1,
                req->num2, resp->num);
  };

public:
  Server() : Node("cpp02_Server") {

    RCLCPP_INFO(get_logger(), "创建 cpp02_Server");

    Service_ = this->create_service<AddInts>(
        "add_int", std::bind(&Server::add, this, _1, _2));
  };
};

int main(int argc, char *argv[]) {

  rclcpp::init(argc, argv);
  auto server = std::make_shared<Server>();

  rclcpp::spin(server);
  rclcpp::shutdown();
  return 0;
}
