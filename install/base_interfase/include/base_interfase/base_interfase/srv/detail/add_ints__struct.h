// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfase:srv/AddInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfase/srv/add_ints.h"


#ifndef BASE_INTERFASE__SRV__DETAIL__ADD_INTS__STRUCT_H_
#define BASE_INTERFASE__SRV__DETAIL__ADD_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddInts in the package base_interfase.
typedef struct base_interfase__srv__AddInts_Request
{
  int32_t num1;
  int32_t num2;
} base_interfase__srv__AddInts_Request;

// Struct for a sequence of base_interfase__srv__AddInts_Request.
typedef struct base_interfase__srv__AddInts_Request__Sequence
{
  base_interfase__srv__AddInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__srv__AddInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddInts in the package base_interfase.
typedef struct base_interfase__srv__AddInts_Response
{
  int32_t num;
} base_interfase__srv__AddInts_Response;

// Struct for a sequence of base_interfase__srv__AddInts_Response.
typedef struct base_interfase__srv__AddInts_Response__Sequence
{
  base_interfase__srv__AddInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__srv__AddInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  base_interfase__srv__AddInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  base_interfase__srv__AddInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddInts in the package base_interfase.
typedef struct base_interfase__srv__AddInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  base_interfase__srv__AddInts_Request__Sequence request;
  base_interfase__srv__AddInts_Response__Sequence response;
} base_interfase__srv__AddInts_Event;

// Struct for a sequence of base_interfase__srv__AddInts_Event.
typedef struct base_interfase__srv__AddInts_Event__Sequence
{
  base_interfase__srv__AddInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__srv__AddInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFASE__SRV__DETAIL__ADD_INTS__STRUCT_H_
