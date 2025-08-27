#include "base_interfase/action/progrees.hpp"

#include <cstdint>
#include <cstdlib>
#include <functional>
#include <rclcpp/logging.hpp>
#include <rclcpp/rclcpp.hpp>

#include <atomic>
#include <csignal>
#include <rclcpp/node.hpp>
#include <rclcpp_action/client.hpp>
#include <rclcpp_action/create_client.hpp>

using base_interfase::action::Progrees;
using std::placeholders::_1;
using std::placeholders::_2;
using namespace std::chrono_literals;

class ActionClient : public rclcpp::Node {

  rclcpp_action::Client<Progrees>::SharedPtr client_;
  rclcpp_action::ClientGoalHandle<Progrees>::SharedPtr goal_handle_;

public:
  ActionClient() : Node("Action_Client") {
    RCLCPP_INFO(get_logger(), "创建客户端");
    client_ = rclcpp_action::create_client<Progrees>(this, "get_sum");
  };

  // 发送
  void send_goal(int32_t num) {

    // 检查是否连接成功
    if (!client_->wait_for_action_server(10s)) {
      RCLCPP_INFO(get_logger(), "建立连接失败");
      return;
    }

    auto goal = Progrees::Goal();
    goal.set__req(num);

    auto options = rclcpp_action::Client<Progrees>::SendGoalOptions();

    options.goal_response_callback =
        std::bind(&ActionClient::goal_response_callback, this, _1);
    options.feedback_callback =
        std::bind(&ActionClient::feedback_callback, this, _1, _2);
    options.result_callback =
        std::bind(&ActionClient::result_callback, this, _1);

    client_->async_send_goal(goal, options);
  };

  // 取消任务
  void cancel_goal() {
    if (goal_handle_) {
      RCLCPP_INFO(get_logger(), "发送取消任务请求");
      client_->async_cancel_goal(goal_handle_);
    } else {
      RCLCPP_WARN(get_logger(), "没有活动的任务可以取消");
    }
  };

  void goal_response_callback(
      rclcpp_action::ClientGoalHandle<Progrees>::SharedPtr goal_handle) {

    if (goal_handle == nullptr) {
      RCLCPP_INFO(get_logger(), "参数错误 请求被拒绝");
    } else {
      RCLCPP_INFO(get_logger(), "提交成功 正在处理");
      goal_handle_ = goal_handle;
    }
  };

  void feedback_callback(
      rclcpp_action::ClientGoalHandle<Progrees>::SharedPtr goal_handle,
      const std::shared_ptr<const Progrees::Feedback> feedback) {

    (void)goal_handle;

    // 执行进度
    auto progrees = feedback.get()->progrees;
    int pr0 = int(progrees * 100);
    RCLCPP_INFO(get_logger(), "进度条:%d", pr0);
  };

  void result_callback(
      const rclcpp_action::ClientGoalHandle<Progrees>::WrappedResult &result) {

    // 执行结果
    switch (result.code) {
    case rclcpp_action::ResultCode::SUCCEEDED:
      RCLCPP_INFO(get_logger(), "成功:%d", result.result.get()->resp);
      RCLCPP_INFO(get_logger(), "成功 任务code:%d", int32_t(result.code));
      break;

    case rclcpp_action::ResultCode::ABORTED:
      RCLCPP_INFO(get_logger(), "中止服务:%d", result.result.get()->resp);
      RCLCPP_INFO(get_logger(), "中止 任务code:%d", int32_t(result.code));
      break;

    case rclcpp_action::ResultCode::CANCELED:
      RCLCPP_INFO(get_logger(), "取消 任务:%d", result.result.get()->resp);
      RCLCPP_INFO(get_logger(), "取消 任务code:%d", int32_t(result.code));
      break;

    default:
      RCLCPP_INFO(get_logger(), "未知结果 code:%d", int32_t(result.code));
      break;
    }
  }
};

// 全局变量用于信号处理
std::shared_ptr<ActionClient> global_client = nullptr;
std::atomic<bool> interrupted{false};

// 信号处理函数
void signal_handler(int signal) {
  if (signal == SIGINT) {
    interrupted.store(true);
    if (global_client) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "接收到中断信号，取消任务...");
      global_client->cancel_goal();
    }
  }
}

int main(int argc, char *argv[]) {

  if (argc <= 1) {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "参数错误");
    return 0;
  }

  rclcpp::init(argc, argv);

  auto client = std::make_shared<ActionClient>();
  global_client = client; // 设置全局变量

  // 设置信号处理
  std::signal(SIGINT, signal_handler);

  client->send_goal(atoi(argv[1]));

  RCLCPP_INFO(client->get_logger(), "程序运行中，按Ctrl+C可以取消任务");

  rclcpp::spin(client);

  rclcpp::shutdown();
  return 0;
}
