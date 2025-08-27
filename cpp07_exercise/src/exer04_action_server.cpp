#pragma once
#include <memory>

#include "base_interfase/action/nav.hpp"
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <thread>

using base_interfase::action::Nav;

class exec04ActionServer : public rclcpp::Node {
public:
  exec04ActionServer() : Node("exer04_action_server") {
    // Create an action server with a callback function to handle goal requests
    action_server_ = rclcpp_action::create_server<Nav>(
        this, "nav",
        std::bind(&exec04ActionServer ::handle_goal, this,
                  std::placeholders::_1, std::placeholders::_2),
        std::bind(&exec04ActionServer ::handle_cancel, this,
                  std::placeholders::_1),
        std::bind(&exec04ActionServer::handle_accepted, this,
                  std::placeholders::_1));
  }

private:
  rclcpp_action::Server<Nav>::SharedPtr action_server_;

  rclcpp_action::GoalResponse
  handle_goal(const rclcpp_action::GoalUUID &uuid,
              std::shared_ptr<const Nav::Goal> goal) {
    RCLCPP_INFO(this->get_logger(), "Received goal request with order %.2f",
                goal.get()->theta_goal);
    (void)uuid;
    // Accept all goals
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
      const std::shared_ptr<rclcpp_action::ServerGoalHandle<Nav>> goal_handle) {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    // Accept all cancel requests
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(
      const std::shared_ptr<rclcpp_action::ServerGoalHandle<Nav>> goal_handle) {
    // This needs to return quickly to avoid blocking the executor, so spin up a
    // new thread
    std::thread{
        std::bind(&exec04ActionServer::execute, this, std::placeholders::_1),
        goal_handle}
        .detach();
  }

  void execute(
      const std::shared_ptr<rclcpp_action::ServerGoalHandle<Nav>> goal_handle) {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    rclcpp::Rate loop_rate(1);
    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<Nav::Feedback>();
    auto result = std::make_shared<Nav::Result>();
    // Simulate some work being done
    for (int i = 0; (i < goal->x_goal) && rclcpp::ok(); ++i) {
      // Check if there is a cancel request
      if (goal_handle->is_canceling()) {
        result->x_turtle = i;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled");
        return;
      }
      // Update feedback
      feedback->distance = i;
      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "Published feedback: %.2f",
                  feedback->distance);
      loop_rate.sleep();
    }
    // Check if goal is done
    if (rclcpp::ok()) {
      result->x_turtle = goal->x_goal;

      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    }
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<exec04ActionServer>());
  rclcpp::shutdown();
  return 0;
}
