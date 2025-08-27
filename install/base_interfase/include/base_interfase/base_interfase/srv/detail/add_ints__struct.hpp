// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from base_interfase:srv/AddInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfase/srv/add_ints.hpp"


#ifndef BASE_INTERFASE__SRV__DETAIL__ADD_INTS__STRUCT_HPP_
#define BASE_INTERFASE__SRV__DETAIL__ADD_INTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__base_interfase__srv__AddInts_Request __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__srv__AddInts_Request __declspec(deprecated)
#endif

namespace base_interfase
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddInts_Request_
{
  using Type = AddInts_Request_<ContainerAllocator>;

  explicit AddInts_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0l;
      this->num2 = 0l;
    }
  }

  explicit AddInts_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0l;
      this->num2 = 0l;
    }
  }

  // field types and members
  using _num1_type =
    int32_t;
  _num1_type num1;
  using _num2_type =
    int32_t;
  _num2_type num2;

  // setters for named parameter idiom
  Type & set__num1(
    const int32_t & _arg)
  {
    this->num1 = _arg;
    return *this;
  }
  Type & set__num2(
    const int32_t & _arg)
  {
    this->num2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::srv::AddInts_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::srv::AddInts_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::srv::AddInts_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::srv::AddInts_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__srv__AddInts_Request
    std::shared_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__srv__AddInts_Request
    std::shared_ptr<base_interfase::srv::AddInts_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddInts_Request_ & other) const
  {
    if (this->num1 != other.num1) {
      return false;
    }
    if (this->num2 != other.num2) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddInts_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddInts_Request_

// alias to use template instance with default allocator
using AddInts_Request =
  base_interfase::srv::AddInts_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfase


#ifndef _WIN32
# define DEPRECATED__base_interfase__srv__AddInts_Response __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__srv__AddInts_Response __declspec(deprecated)
#endif

namespace base_interfase
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddInts_Response_
{
  using Type = AddInts_Response_<ContainerAllocator>;

  explicit AddInts_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
    }
  }

  explicit AddInts_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
    }
  }

  // field types and members
  using _num_type =
    int32_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int32_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::srv::AddInts_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::srv::AddInts_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::srv::AddInts_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::srv::AddInts_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__srv__AddInts_Response
    std::shared_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__srv__AddInts_Response
    std::shared_ptr<base_interfase::srv::AddInts_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddInts_Response_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddInts_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddInts_Response_

// alias to use template instance with default allocator
using AddInts_Response =
  base_interfase::srv::AddInts_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfase


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__base_interfase__srv__AddInts_Event __attribute__((deprecated))
#else
# define DEPRECATED__base_interfase__srv__AddInts_Event __declspec(deprecated)
#endif

namespace base_interfase
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddInts_Event_
{
  using Type = AddInts_Event_<ContainerAllocator>;

  explicit AddInts_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AddInts_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<base_interfase::srv::AddInts_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::srv::AddInts_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<base_interfase::srv::AddInts_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::srv::AddInts_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<base_interfase::srv::AddInts_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::srv::AddInts_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<base_interfase::srv::AddInts_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<base_interfase::srv::AddInts_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    base_interfase::srv::AddInts_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const base_interfase::srv::AddInts_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      base_interfase::srv::AddInts_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      base_interfase::srv::AddInts_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__base_interfase__srv__AddInts_Event
    std::shared_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__base_interfase__srv__AddInts_Event
    std::shared_ptr<base_interfase::srv::AddInts_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddInts_Event_ & other) const
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
  bool operator!=(const AddInts_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddInts_Event_

// alias to use template instance with default allocator
using AddInts_Event =
  base_interfase::srv::AddInts_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace base_interfase

namespace base_interfase
{

namespace srv
{

struct AddInts
{
  using Request = base_interfase::srv::AddInts_Request;
  using Response = base_interfase::srv::AddInts_Response;
  using Event = base_interfase::srv::AddInts_Event;
};

}  // namespace srv

}  // namespace base_interfase

#endif  // BASE_INTERFASE__SRV__DETAIL__ADD_INTS__STRUCT_HPP_
