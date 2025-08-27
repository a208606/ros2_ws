// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfase:msg/Student.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfase/msg/student.hpp"


#ifndef BASE_INTERFASE__MSG__DETAIL__STUDENT__BUILDER_HPP_
#define BASE_INTERFASE__MSG__DETAIL__STUDENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfase/msg/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfase
{

namespace msg
{

namespace builder
{

class Init_Student_height
{
public:
  explicit Init_Student_height(::base_interfase::msg::Student & msg)
  : msg_(msg)
  {}
  ::base_interfase::msg::Student height(::base_interfase::msg::Student::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfase::msg::Student msg_;
};

class Init_Student_age
{
public:
  explicit Init_Student_age(::base_interfase::msg::Student & msg)
  : msg_(msg)
  {}
  Init_Student_height age(::base_interfase::msg::Student::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Student_height(msg_);
  }

private:
  ::base_interfase::msg::Student msg_;
};

class Init_Student_name
{
public:
  Init_Student_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Student_age name(::base_interfase::msg::Student::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Student_age(msg_);
  }

private:
  ::base_interfase::msg::Student msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfase::msg::Student>()
{
  return base_interfase::msg::builder::Init_Student_name();
}

}  // namespace base_interfase

#endif  // BASE_INTERFASE__MSG__DETAIL__STUDENT__BUILDER_HPP_
