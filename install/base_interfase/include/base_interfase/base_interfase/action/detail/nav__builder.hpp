// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfase:action/Nav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfase/action/nav.hpp"


#ifndef BASE_INTERFASE__ACTION__DETAIL__NAV__BUILDER_HPP_
#define BASE_INTERFASE__ACTION__DETAIL__NAV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfase/action/detail/nav__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_Goal_theta_goal
{
public:
  explicit Init_Nav_Goal_theta_goal(::base_interfase::action::Nav_Goal & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_Goal theta_goal(::base_interfase::action::Nav_Goal::_theta_goal_type arg)
  {
    msg_.theta_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_Goal msg_;
};

class Init_Nav_Goal_y_goal
{
public:
  explicit Init_Nav_Goal_y_goal(::base_interfase::action::Nav_Goal & msg)
  : msg_(msg)
  {}
  Init_Nav_Goal_theta_goal y_goal(::base_interfase::action::Nav_Goal::_y_goal_type arg)
  {
    msg_.y_goal = std::move(arg);
    return Init_Nav_Goal_theta_goal(msg_);
  }

private:
  ::base_interfase::action::Nav_Goal msg_;
};

class Init_Nav_Goal_x_goal
{
public:
  Init_Nav_Goal_x_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_Goal_y_goal x_goal(::base_interfase::action::Nav_Goal::_x_goal_type arg)
  {
    msg_.x_goal = std::move(arg);
    return Init_Nav_Goal_y_goal(msg_);
  }

private:
  ::base_interfase::action::Nav_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_Goal>()
{
  return base_interfase::action::builder::Init_Nav_Goal_x_goal();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_Result_theta_turtle
{
public:
  explicit Init_Nav_Result_theta_turtle(::base_interfase::action::Nav_Result & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_Result theta_turtle(::base_interfase::action::Nav_Result::_theta_turtle_type arg)
  {
    msg_.theta_turtle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_Result msg_;
};

class Init_Nav_Result_y_turtle
{
public:
  explicit Init_Nav_Result_y_turtle(::base_interfase::action::Nav_Result & msg)
  : msg_(msg)
  {}
  Init_Nav_Result_theta_turtle y_turtle(::base_interfase::action::Nav_Result::_y_turtle_type arg)
  {
    msg_.y_turtle = std::move(arg);
    return Init_Nav_Result_theta_turtle(msg_);
  }

private:
  ::base_interfase::action::Nav_Result msg_;
};

class Init_Nav_Result_x_turtle
{
public:
  Init_Nav_Result_x_turtle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_Result_y_turtle x_turtle(::base_interfase::action::Nav_Result::_x_turtle_type arg)
  {
    msg_.x_turtle = std::move(arg);
    return Init_Nav_Result_y_turtle(msg_);
  }

private:
  ::base_interfase::action::Nav_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_Result>()
{
  return base_interfase::action::builder::Init_Nav_Result_x_turtle();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_Feedback_distance
{
public:
  Init_Nav_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfase::action::Nav_Feedback distance(::base_interfase::action::Nav_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_Feedback>()
{
  return base_interfase::action::builder::Init_Nav_Feedback_distance();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_SendGoal_Request_goal
{
public:
  explicit Init_Nav_SendGoal_Request_goal(::base_interfase::action::Nav_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_SendGoal_Request goal(::base_interfase::action::Nav_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_SendGoal_Request msg_;
};

class Init_Nav_SendGoal_Request_goal_id
{
public:
  Init_Nav_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_SendGoal_Request_goal goal_id(::base_interfase::action::Nav_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Nav_SendGoal_Request_goal(msg_);
  }

private:
  ::base_interfase::action::Nav_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_SendGoal_Request>()
{
  return base_interfase::action::builder::Init_Nav_SendGoal_Request_goal_id();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_SendGoal_Response_stamp
{
public:
  explicit Init_Nav_SendGoal_Response_stamp(::base_interfase::action::Nav_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_SendGoal_Response stamp(::base_interfase::action::Nav_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_SendGoal_Response msg_;
};

class Init_Nav_SendGoal_Response_accepted
{
public:
  Init_Nav_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_SendGoal_Response_stamp accepted(::base_interfase::action::Nav_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Nav_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_interfase::action::Nav_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_SendGoal_Response>()
{
  return base_interfase::action::builder::Init_Nav_SendGoal_Response_accepted();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_SendGoal_Event_response
{
public:
  explicit Init_Nav_SendGoal_Event_response(::base_interfase::action::Nav_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_SendGoal_Event response(::base_interfase::action::Nav_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_SendGoal_Event msg_;
};

class Init_Nav_SendGoal_Event_request
{
public:
  explicit Init_Nav_SendGoal_Event_request(::base_interfase::action::Nav_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Nav_SendGoal_Event_response request(::base_interfase::action::Nav_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Nav_SendGoal_Event_response(msg_);
  }

private:
  ::base_interfase::action::Nav_SendGoal_Event msg_;
};

class Init_Nav_SendGoal_Event_info
{
public:
  Init_Nav_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_SendGoal_Event_request info(::base_interfase::action::Nav_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Nav_SendGoal_Event_request(msg_);
  }

private:
  ::base_interfase::action::Nav_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_SendGoal_Event>()
{
  return base_interfase::action::builder::Init_Nav_SendGoal_Event_info();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_GetResult_Request_goal_id
{
public:
  Init_Nav_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfase::action::Nav_GetResult_Request goal_id(::base_interfase::action::Nav_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_GetResult_Request>()
{
  return base_interfase::action::builder::Init_Nav_GetResult_Request_goal_id();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_GetResult_Response_result
{
public:
  explicit Init_Nav_GetResult_Response_result(::base_interfase::action::Nav_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_GetResult_Response result(::base_interfase::action::Nav_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_GetResult_Response msg_;
};

class Init_Nav_GetResult_Response_status
{
public:
  Init_Nav_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_GetResult_Response_result status(::base_interfase::action::Nav_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Nav_GetResult_Response_result(msg_);
  }

private:
  ::base_interfase::action::Nav_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_GetResult_Response>()
{
  return base_interfase::action::builder::Init_Nav_GetResult_Response_status();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_GetResult_Event_response
{
public:
  explicit Init_Nav_GetResult_Event_response(::base_interfase::action::Nav_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_GetResult_Event response(::base_interfase::action::Nav_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_GetResult_Event msg_;
};

class Init_Nav_GetResult_Event_request
{
public:
  explicit Init_Nav_GetResult_Event_request(::base_interfase::action::Nav_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Nav_GetResult_Event_response request(::base_interfase::action::Nav_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Nav_GetResult_Event_response(msg_);
  }

private:
  ::base_interfase::action::Nav_GetResult_Event msg_;
};

class Init_Nav_GetResult_Event_info
{
public:
  Init_Nav_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_GetResult_Event_request info(::base_interfase::action::Nav_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Nav_GetResult_Event_request(msg_);
  }

private:
  ::base_interfase::action::Nav_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_GetResult_Event>()
{
  return base_interfase::action::builder::Init_Nav_GetResult_Event_info();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Nav_FeedbackMessage_feedback
{
public:
  explicit Init_Nav_FeedbackMessage_feedback(::base_interfase::action::Nav_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Nav_FeedbackMessage feedback(::base_interfase::action::Nav_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Nav_FeedbackMessage msg_;
};

class Init_Nav_FeedbackMessage_goal_id
{
public:
  Init_Nav_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nav_FeedbackMessage_feedback goal_id(::base_interfase::action::Nav_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Nav_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_interfase::action::Nav_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Nav_FeedbackMessage>()
{
  return base_interfase::action::builder::Init_Nav_FeedbackMessage_goal_id();
}

}  // namespace base_interfase

#endif  // BASE_INTERFASE__ACTION__DETAIL__NAV__BUILDER_HPP_
