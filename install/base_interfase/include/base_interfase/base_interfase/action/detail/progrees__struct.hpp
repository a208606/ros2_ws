// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfase:action/Progrees.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfase/action/progrees.hpp"


#ifndef BASE_INTERFASE__ACTION__DETAIL__PROGREES__STRUCT_HPP_
#define BASE_INTERFASE__ACTION__DETAIL__PROGREES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_Goal __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_Goal __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_Goal_
{
  using Type = Progrees_Goal_<ContainerAllocator>;

  explicit Progrees_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = 0l;
    }
  }

  explicit Progrees_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = 0l;
    }
  }

  // field types and members
  using _req_type =
    int32_t;
  _req_type req;

  // setters for named parameter idiom
  Type & set__req(
    const int32_t & _arg)
  {
    this->req = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_Goal
    std::shared_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_Goal
    std::shared_ptr<base_interfase::action::Progrees_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_Goal_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_Goal_

// alias to use template instance with default allocator
using Progrees_Goal =
  base_interfase::action::Progrees_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase


#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_Result __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_Result __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_Result_
{
  using Type = Progrees_Result_<ContainerAllocator>;

  explicit Progrees_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = 0l;
    }
  }

  explicit Progrees_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = 0l;
    }
  }

  // field types and members
  using _resp_type =
    int32_t;
  _resp_type resp;

  // setters for named parameter idiom
  Type & set__resp(
    const int32_t & _arg)
  {
    this->resp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_Result
    std::shared_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_Result
    std::shared_ptr<base_interfase::action::Progrees_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_Result_ & other) const
  {
    if (this->resp != other.resp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_Result_

// alias to use template instance with default allocator
using Progrees_Result =
  base_interfase::action::Progrees_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase


#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_Feedback __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_Feedback_
{
  using Type = Progrees_Feedback_<ContainerAllocator>;

  explicit Progrees_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progrees = 0.0;
    }
  }

  explicit Progrees_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progrees = 0.0;
    }
  }

  // field types and members
  using _progrees_type =
    double;
  _progrees_type progrees;

  // setters for named parameter idiom
  Type & set__progrees(
    const double & _arg)
  {
    this->progrees = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_Feedback
    std::shared_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_Feedback
    std::shared_ptr<base_interfase::action::Progrees_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_Feedback_ & other) const
  {
    if (this->progrees != other.progrees) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_Feedback_

// alias to use template instance with default allocator
using Progrees_Feedback =
  base_interfase::action::Progrees_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "base_interfase/action/detail/progrees__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_SendGoal_Request __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_SendGoal_Request_
{
  using Type = Progrees_SendGoal_Request_<ContainerAllocator>;

  explicit Progrees_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Progrees_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    base_interfase::action::Progrees_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const base_interfase::action::Progrees_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_SendGoal_Request
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_SendGoal_Request
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_SendGoal_Request_

// alias to use template instance with default allocator
using Progrees_SendGoal_Request =
  base_interfase::action::Progrees_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_SendGoal_Response __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_SendGoal_Response_
{
  using Type = Progrees_SendGoal_Response_<ContainerAllocator>;

  explicit Progrees_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Progrees_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_SendGoal_Response
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_SendGoal_Response
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_SendGoal_Response_

// alias to use template instance with default allocator
using Progrees_SendGoal_Response =
  base_interfase::action::Progrees_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_SendGoal_Event __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_SendGoal_Event_
{
  using Type = Progrees_SendGoal_Event_<ContainerAllocator>;

  explicit Progrees_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Progrees_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_SendGoal_Event
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_SendGoal_Event
    std::shared_ptr<base_interfase::action::Progrees_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_SendGoal_Event_

// alias to use template instance with default allocator
using Progrees_SendGoal_Event =
  base_interfase::action::Progrees_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase

namespace base_interfase
{

namespace action
{

struct Progrees_SendGoal
{
  using Request = base_interfase::action::Progrees_SendGoal_Request;
  using Response = base_interfase::action::Progrees_SendGoal_Response;
  using Event = base_interfase::action::Progrees_SendGoal_Event;
};

}  // namespace action

}  // namespace base_interfase


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_GetResult_Request __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_GetResult_Request_
{
  using Type = Progrees_GetResult_Request_<ContainerAllocator>;

  explicit Progrees_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Progrees_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_GetResult_Request
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_GetResult_Request
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_GetResult_Request_

// alias to use template instance with default allocator
using Progrees_GetResult_Request =
  base_interfase::action::Progrees_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase


// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfase/action/detail/progrees__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_GetResult_Response __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_GetResult_Response_
{
  using Type = Progrees_GetResult_Response_<ContainerAllocator>;

  explicit Progrees_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Progrees_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    base_interfase::action::Progrees_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const base_interfase::action::Progrees_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_GetResult_Response
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_GetResult_Response
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_GetResult_Response_

// alias to use template instance with default allocator
using Progrees_GetResult_Response =
  base_interfase::action::Progrees_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_GetResult_Event __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_GetResult_Event_
{
  using Type = Progrees_GetResult_Event_<ContainerAllocator>;

  explicit Progrees_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Progrees_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::action::Progrees_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_GetResult_Event
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_GetResult_Event
    std::shared_ptr<base_interfase::action::Progrees_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_GetResult_Event_

// alias to use template instance with default allocator
using Progrees_GetResult_Event =
  base_interfase::action::Progrees_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase

namespace base_interfase
{

namespace action
{

struct Progrees_GetResult
{
  using Request = base_interfase::action::Progrees_GetResult_Request;
  using Response = base_interfase::action::Progrees_GetResult_Response;
  using Event = base_interfase::action::Progrees_GetResult_Event;
};

}  // namespace action

}  // namespace base_interfase


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "base_interfase/action/detail/progrees__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__action__Progrees_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__action__Progrees_FeedbackMessage __declspec(deprecated)
#endif

namespace base_interfase
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Progrees_FeedbackMessage_
{
  using Type = Progrees_FeedbackMessage_<ContainerAllocator>;

  explicit Progrees_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Progrees_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    base_interfase::action::Progrees_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const base_interfase::action::Progrees_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__action__Progrees_FeedbackMessage
    std::shared_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__action__Progrees_FeedbackMessage
    std::shared_ptr<base_interfase::action::Progrees_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progrees_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progrees_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progrees_FeedbackMessage_

// alias to use template instance with default allocator
using Progrees_FeedbackMessage =
  base_interfase::action::Progrees_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace base_interfase

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace base_interfase
{

namespace action
{

struct Progrees
{
  /// The goal message defined in the action definition.
  using Goal = base_interfase::action::Progrees_Goal;
  /// The result message defined in the action definition.
  using Result = base_interfase::action::Progrees_Result;
  /// The feedback message defined in the action definition.
  using Feedback = base_interfase::action::Progrees_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = base_interfase::action::Progrees_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = base_interfase::action::Progrees_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = base_interfase::action::Progrees_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Progrees Progrees;

}  // namespace action

}  // namespace base_interfase

#endif  // BASE_INTERFASE__ACTION__DETAIL__PROGREES__STRUCT_HPP_
