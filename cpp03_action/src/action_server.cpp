#include "base_interfase/action/progrees.hpp"
#include <rclcpp/executors.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/node.hpp>
#include <rclcpp/rate.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <thread>

using base_interfase::action::Progrees;
using std::placeholders::_1;
using std::placeholders::_2;

class ActionServer : public rclcpp::Node {

  rclcpp_action::Server<Progrees>::SharedPtr action_;

  // 提交任务
  rclcpp_action::GoalResponse
  Handel_goal(const rclcpp_action::GoalUUID &uuid,
              std::shared_ptr<const Progrees::Goal> goal) {
    (void)uuid;

    // 判断提交的数据是否 合规
    if (goal->req <= 0) {
      RCLCPP_WARN(this->get_logger(), "提交任务 不能0值, 不能复数");
      return rclcpp_action::GoalResponse::REJECT;
    }

    RCLCPP_INFO(this->get_logger(), "提交任务");
    // 允许并执行
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  };

  // 中途关闭任务
  rclcpp_action::CancelResponse Handel_cancel(
      std::shared_ptr<rclcpp_action::ServerGoalHandle<Progrees>> goal) {
    (void)goal;

    RCLCPP_INFO(this->get_logger(), "接收取消任务的请求");
    // 允许提交
    return rclcpp_action::CancelResponse::ACCEPT;
    //// 拒绝
    // return rclcpp_action::CancelResponse::REJECT;
  };

  // 持续处理（提交的任务）
  void Handel_accepted(
      std::shared_ptr<rclcpp_action::ServerGoalHandle<Progrees>> goal) {
    RCLCPP_INFO(this->get_logger(), "激活持续处理任务");

    // 启动线程
    std::thread(std::bind(&ActionServer::executors, this, goal)).detach();
  };

  // 异步数据处理
  void
  executors(std::shared_ptr<rclcpp_action::ServerGoalHandle<Progrees>> goal) {
    RCLCPP_INFO(this->get_logger(), "异步启动");

    int num = goal->get_goal()->req;
    int sum = 0;
    auto feedback = std::make_shared<Progrees::Feedback>();

    // 定时器  单位Hz
    rclcpp::Rate rate(1.0);
    auto result = std::make_shared<Progrees::Result>();
    for (int i = 0; i <= num; i++) {
      sum += 1;
      float_t progrees = i / (float_t)num;

      RCLCPP_INFO(this->get_logger(), "进度条: %.2f", progrees);
      feedback->set__progrees(progrees);

      // 取消任务的信号
      if (goal->is_canceling()) {

        RCLCPP_INFO(this->get_logger(), "任务被取消: %.2f", progrees);

        result->set__resp(sum);
        goal->canceled(result);
        return;
      }

      // 返回进度条
      goal->publish_feedback(feedback);
      // 等
      rate.sleep();
    };

    RCLCPP_INFO(this->get_logger(), "工作结束： %d", sum);

    if (rclcpp::ok()) {

      result->set__resp(sum);
      goal->succeed(result);
    }
  };

public:
  // 初始化
  ActionServer() : Node("Action_Server") {

    RCLCPP_INFO(this->get_logger(), "创建 动作通信");

    // 创建 动作通信
    action_ = rclcpp_action::create_server<Progrees>(
        this, "get_sum", std::bind(&ActionServer::Handel_goal, this, _1, _2),
        std::bind(&ActionServer::Handel_cancel, this, _1),
        std::bind(&ActionServer::Handel_accepted, this, _1));
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ActionServer>());
  rclcpp::shutdown();
  return 0;
}
