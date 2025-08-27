// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfase:action/Progrees.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfase/action/progrees.h"


#ifndef BASE_INTERFASE__ACTION__DETAIL__PROGREES__STRUCT_H_
#define BASE_INTERFASE__ACTION__DETAIL__PROGREES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_Goal
{
  int32_t req;
} base_interfase__action__Progrees_Goal;

// Struct for a sequence of base_interfase__action__Progrees_Goal.
typedef struct base_interfase__action__Progrees_Goal__Sequence
{
  base_interfase__action__Progrees_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_Result
{
  int32_t resp;
} base_interfase__action__Progrees_Result;

// Struct for a sequence of base_interfase__action__Progrees_Result.
typedef struct base_interfase__action__Progrees_Result__Sequence
{
  base_interfase__action__Progrees_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_Feedback
{
  double progrees;
} base_interfase__action__Progrees_Feedback;

// Struct for a sequence of base_interfase__action__Progrees_Feedback.
typedef struct base_interfase__action__Progrees_Feedback__Sequence
{
  base_interfase__action__Progrees_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "base_interfase/action/detail/progrees__struct.h"

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_interfase__action__Progrees_Goal goal;
} base_interfase__action__Progrees_SendGoal_Request;

// Struct for a sequence of base_interfase__action__Progrees_SendGoal_Request.
typedef struct base_interfase__action__Progrees_SendGoal_Request__Sequence
{
  base_interfase__action__Progrees_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} base_interfase__action__Progrees_SendGoal_Response;

// Struct for a sequence of base_interfase__action__Progrees_SendGoal_Response.
typedef struct base_interfase__action__Progrees_SendGoal_Response__Sequence
{
  base_interfase__action__Progrees_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  base_interfase__action__Progrees_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  base_interfase__action__Progrees_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  base_interfase__action__Progrees_SendGoal_Request__Sequence request;
  base_interfase__action__Progrees_SendGoal_Response__Sequence response;
} base_interfase__action__Progrees_SendGoal_Event;

// Struct for a sequence of base_interfase__action__Progrees_SendGoal_Event.
typedef struct base_interfase__action__Progrees_SendGoal_Event__Sequence
{
  base_interfase__action__Progrees_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} base_interfase__action__Progrees_GetResult_Request;

// Struct for a sequence of base_interfase__action__Progrees_GetResult_Request.
typedef struct base_interfase__action__Progrees_GetResult_Request__Sequence
{
  base_interfase__action__Progrees_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "base_interfase/action/detail/progrees__struct.h"

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_GetResult_Response
{
  int8_t status;
  base_interfase__action__Progrees_Result result;
} base_interfase__action__Progrees_GetResult_Response;

// Struct for a sequence of base_interfase__action__Progrees_GetResult_Response.
typedef struct base_interfase__action__Progrees_GetResult_Response__Sequence
{
  base_interfase__action__Progrees_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  base_interfase__action__Progrees_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  base_interfase__action__Progrees_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  base_interfase__action__Progrees_GetResult_Request__Sequence request;
  base_interfase__action__Progrees_GetResult_Response__Sequence response;
} base_interfase__action__Progrees_GetResult_Event;

// Struct for a sequence of base_interfase__action__Progrees_GetResult_Event.
typedef struct base_interfase__action__Progrees_GetResult_Event__Sequence
{
  base_interfase__action__Progrees_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "base_interfase/action/detail/progrees__struct.h"

/// Struct defined in action/Progrees in the package base_interfase.
typedef struct base_interfase__action__Progrees_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_interfase__action__Progrees_Feedback feedback;
} base_interfase__action__Progrees_FeedbackMessage;

// Struct for a sequence of base_interfase__action__Progrees_FeedbackMessage.
typedef struct base_interfase__action__Progrees_FeedbackMessage__Sequence
{
  base_interfase__action__Progrees_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfase__action__Progrees_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFASE__ACTION__DETAIL__PROGREES__STRUCT_H_
