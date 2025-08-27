// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfase:action/Progrees.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfase/action/progrees.hpp"


#ifndef BASE_INTERFASE__ACTION__DETAIL__PROGREES__BUILDER_HPP_
#define BASE_INTERFASE__ACTION__DETAIL__PROGREES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfase/action/detail/progrees__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_Goal_req
{
public:
  Init_Progrees_Goal_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfase::action::Progrees_Goal req(::base_interfase::action::Progrees_Goal::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_Goal>()
{
  return base_interfase::action::builder::Init_Progrees_Goal_req();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_Result_resp
{
public:
  Init_Progrees_Result_resp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfase::action::Progrees_Result resp(::base_interfase::action::Progrees_Result::_resp_type arg)
  {
    msg_.resp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_Result>()
{
  return base_interfase::action::builder::Init_Progrees_Result_resp();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_Feedback_progrees
{
public:
  Init_Progrees_Feedback_progrees()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfase::action::Progrees_Feedback progrees(::base_interfase::action::Progrees_Feedback::_progrees_type arg)
  {
    msg_.progrees = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_Feedback>()
{
  return base_interfase::action::builder::Init_Progrees_Feedback_progrees();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_SendGoal_Request_goal
{
public:
  explicit Init_Progrees_SendGoal_Request_goal(::base_interfase::action::Progrees_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Progrees_SendGoal_Request goal(::base_interfase::action::Progrees_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_SendGoal_Request msg_;
};

class Init_Progrees_SendGoal_Request_goal_id
{
public:
  Init_Progrees_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progrees_SendGoal_Request_goal goal_id(::base_interfase::action::Progrees_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Progrees_SendGoal_Request_goal(msg_);
  }

private:
  ::base_interfase::action::Progrees_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_SendGoal_Request>()
{
  return base_interfase::action::builder::Init_Progrees_SendGoal_Request_goal_id();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_SendGoal_Response_stamp
{
public:
  explicit Init_Progrees_SendGoal_Response_stamp(::base_interfase::action::Progrees_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Progrees_SendGoal_Response stamp(::base_interfase::action::Progrees_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_SendGoal_Response msg_;
};

class Init_Progrees_SendGoal_Response_accepted
{
public:
  Init_Progrees_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progrees_SendGoal_Response_stamp accepted(::base_interfase::action::Progrees_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Progrees_SendGoal_Response_stamp(msg_);
  }

private:
  ::base_interfase::action::Progrees_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_SendGoal_Response>()
{
  return base_interfase::action::builder::Init_Progrees_SendGoal_Response_accepted();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_SendGoal_Event_response
{
public:
  explicit Init_Progrees_SendGoal_Event_response(::base_interfase::action::Progrees_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Progrees_SendGoal_Event response(::base_interfase::action::Progrees_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_SendGoal_Event msg_;
};

class Init_Progrees_SendGoal_Event_request
{
public:
  explicit Init_Progrees_SendGoal_Event_request(::base_interfase::action::Progrees_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Progrees_SendGoal_Event_response request(::base_interfase::action::Progrees_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Progrees_SendGoal_Event_response(msg_);
  }

private:
  ::base_interfase::action::Progrees_SendGoal_Event msg_;
};

class Init_Progrees_SendGoal_Event_info
{
public:
  Init_Progrees_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progrees_SendGoal_Event_request info(::base_interfase::action::Progrees_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Progrees_SendGoal_Event_request(msg_);
  }

private:
  ::base_interfase::action::Progrees_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_SendGoal_Event>()
{
  return base_interfase::action::builder::Init_Progrees_SendGoal_Event_info();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_GetResult_Request_goal_id
{
public:
  Init_Progrees_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfase::action::Progrees_GetResult_Request goal_id(::base_interfase::action::Progrees_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_GetResult_Request>()
{
  return base_interfase::action::builder::Init_Progrees_GetResult_Request_goal_id();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_GetResult_Response_result
{
public:
  explicit Init_Progrees_GetResult_Response_result(::base_interfase::action::Progrees_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Progrees_GetResult_Response result(::base_interfase::action::Progrees_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_GetResult_Response msg_;
};

class Init_Progrees_GetResult_Response_status
{
public:
  Init_Progrees_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progrees_GetResult_Response_result status(::base_interfase::action::Progrees_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Progrees_GetResult_Response_result(msg_);
  }

private:
  ::base_interfase::action::Progrees_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_GetResult_Response>()
{
  return base_interfase::action::builder::Init_Progrees_GetResult_Response_status();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_GetResult_Event_response
{
public:
  explicit Init_Progrees_GetResult_Event_response(::base_interfase::action::Progrees_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Progrees_GetResult_Event response(::base_interfase::action::Progrees_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_GetResult_Event msg_;
};

class Init_Progrees_GetResult_Event_request
{
public:
  explicit Init_Progrees_GetResult_Event_request(::base_interfase::action::Progrees_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Progrees_GetResult_Event_response request(::base_interfase::action::Progrees_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Progrees_GetResult_Event_response(msg_);
  }

private:
  ::base_interfase::action::Progrees_GetResult_Event msg_;
};

class Init_Progrees_GetResult_Event_info
{
public:
  Init_Progrees_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progrees_GetResult_Event_request info(::base_interfase::action::Progrees_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Progrees_GetResult_Event_request(msg_);
  }

private:
  ::base_interfase::action::Progrees_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_GetResult_Event>()
{
  return base_interfase::action::builder::Init_Progrees_GetResult_Event_info();
}

}  // namespace base_interfase


namespace base_interfase
{

namespace action
{

namespace builder
{

class Init_Progrees_FeedbackMessage_feedback
{
public:
  explicit Init_Progrees_FeedbackMessage_feedback(::base_interfase::action::Progrees_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::base_interfase::action::Progrees_FeedbackMessage feedback(::base_interfase::action::Progrees_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::action::Progrees_FeedbackMessage msg_;
};

class Init_Progrees_FeedbackMessage_goal_id
{
public:
  Init_Progrees_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progrees_FeedbackMessage_feedback goal_id(::base_interfase::action::Progrees_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Progrees_FeedbackMessage_feedback(msg_);
  }

private:
  ::base_interfase::action::Progrees_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::action::Progrees_FeedbackMessage>()
{
  return base_interfase::action::builder::Init_Progrees_FeedbackMessage_goal_id();
}

}  // namespace base_interfase

#endif  // BASE_INTERFASE__ACTION__DETAIL__PROGREES__BUILDER_HPP_
