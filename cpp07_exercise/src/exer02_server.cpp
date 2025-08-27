#include <memory>

#include "base_interfase/srv/distance.hpp"
#include "turtlesim_msgs/msg/pose.hpp"
#include <rclcpp/rclcpp.hpp>

using namespace base_interfase::srv;
using std::placeholders::_1;
using std::placeholders::_2;
using turtlesim_msgs::msg::Pose;

class ServerDistance : public rclcpp::Node {

  rclcpp::Service<Distance>::SharedPtr server_;
  rclcpp::Subscription<Pose>::SharedPtr sub_;
  float x, y;

  void func_distance(Distance_Request::SharedPtr req,
                     Distance_Response::SharedPtr resp) {
    // 计算距离
    float goal_x = req.get()->x - x;
    float goal_y = req.get()->y - y;
    // 求解距离
    resp->distance = std::sqrt(goal_x * goal_x + goal_y * goal_y);
    RCLCPP_INFO(this->get_logger(), "距离%.2f", resp->distance);
  }

  void pose_callback(const Pose::SharedPtr msg) {
    x = msg->x;
    y = -msg->y;
  }

public:
  // 初始化
  ServerDistance() : Node("Server_Distance") {

    RCLCPP_INFO(this->get_logger(), "初始化服务端");

    // 创建信息服务
    server_ = this->create_service<Distance>(
        "Distance", std::bind(&ServerDistance::func_distance, this, _1, _2),
        10);

    // 创建订阅者
    sub_ = this->create_subscription<Pose>(
        "/turtle1/pose", 10,
        std::bind(&ServerDistance::pose_callback, this, std::placeholders::_1));
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ServerDistance>());
  rclcpp::shutdown();
  return 0;
}
