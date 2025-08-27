// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_interfase:srv/AddInts.idl
// generated code does not contain a copyright notice

#include "base_interfase/srv/detail/add_ints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_interfase
const rosidl_type_hash_t *
base_interfase__srv__AddInts__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0x95, 0xa2, 0xd0, 0x68, 0xa0, 0x3d, 0x49,
      0x5c, 0xae, 0xd9, 0x0f, 0xe0, 0x61, 0xb7, 0x61,
      0xb4, 0x33, 0x7b, 0xf5, 0x30, 0x37, 0x6c, 0xea,
      0xdd, 0x5d, 0x00, 0xa9, 0x1e, 0xfe, 0x83, 0xf1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_base_interfase
const rosidl_type_hash_t *
base_interfase__srv__AddInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x19, 0xbd, 0x52, 0x31, 0xe4, 0xf0, 0x01,
      0x47, 0x2b, 0xa1, 0x24, 0x4c, 0xcf, 0x3a, 0xe9,
      0xcc, 0xd9, 0x3b, 0x38, 0x01, 0x30, 0x73, 0x43,
      0xf0, 0xc3, 0x4d, 0x23, 0x28, 0xbb, 0xb1, 0x0d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_base_interfase
const rosidl_type_hash_t *
base_interfase__srv__AddInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x9e, 0x18, 0x62, 0xbc, 0x41, 0x1a, 0x0a,
      0x5f, 0x92, 0xa8, 0x1c, 0xce, 0x5f, 0xd2, 0x42,
      0x0b, 0x5f, 0x51, 0x18, 0xc6, 0xd5, 0x3a, 0xe4,
      0xad, 0x0b, 0x7b, 0xce, 0xf9, 0x45, 0x15, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_base_interfase
const rosidl_type_hash_t *
base_interfase__srv__AddInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x51, 0xe4, 0x6e, 0xc1, 0x73, 0x0d, 0xd8,
      0x69, 0x45, 0x3c, 0xb2, 0xfa, 0x12, 0x85, 0x1e,
      0xae, 0x7a, 0xf8, 0xd4, 0x80, 0xf2, 0x18, 0x05,
      0xa5, 0x0e, 0xe9, 0xea, 0x9c, 0xb9, 0xe4, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char base_interfase__srv__AddInts__TYPE_NAME[] = "base_interfase/srv/AddInts";
static char base_interfase__srv__AddInts_Event__TYPE_NAME[] = "base_interfase/srv/AddInts_Event";
static char base_interfase__srv__AddInts_Request__TYPE_NAME[] = "base_interfase/srv/AddInts_Request";
static char base_interfase__srv__AddInts_Response__TYPE_NAME[] = "base_interfase/srv/AddInts_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char base_interfase__srv__AddInts__FIELD_NAME__request_message[] = "request_message";
static char base_interfase__srv__AddInts__FIELD_NAME__response_message[] = "response_message";
static char base_interfase__srv__AddInts__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field base_interfase__srv__AddInts__FIELDS[] = {
  {
    {base_interfase__srv__AddInts__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {base_interfase__srv__AddInts_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {base_interfase__srv__AddInts_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {base_interfase__srv__AddInts_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription base_interfase__srv__AddInts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {base_interfase__srv__AddInts_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfase__srv__AddInts__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfase__srv__AddInts__TYPE_NAME, 26, 26},
      {base_interfase__srv__AddInts__FIELDS, 3, 3},
    },
    {base_interfase__srv__AddInts__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = base_interfase__srv__AddInts_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = base_interfase__srv__AddInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = base_interfase__srv__AddInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char base_interfase__srv__AddInts_Request__FIELD_NAME__num1[] = "num1";
static char base_interfase__srv__AddInts_Request__FIELD_NAME__num2[] = "num2";

static rosidl_runtime_c__type_description__Field base_interfase__srv__AddInts_Request__FIELDS[] = {
  {
    {base_interfase__srv__AddInts_Request__FIELD_NAME__num1, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts_Request__FIELD_NAME__num2, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfase__srv__AddInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfase__srv__AddInts_Request__TYPE_NAME, 34, 34},
      {base_interfase__srv__AddInts_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char base_interfase__srv__AddInts_Response__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field base_interfase__srv__AddInts_Response__FIELDS[] = {
  {
    {base_interfase__srv__AddInts_Response__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfase__srv__AddInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfase__srv__AddInts_Response__TYPE_NAME, 35, 35},
      {base_interfase__srv__AddInts_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char base_interfase__srv__AddInts_Event__FIELD_NAME__info[] = "info";
static char base_interfase__srv__AddInts_Event__FIELD_NAME__request[] = "request";
static char base_interfase__srv__AddInts_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field base_interfase__srv__AddInts_Event__FIELDS[] = {
  {
    {base_interfase__srv__AddInts_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {base_interfase__srv__AddInts_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {base_interfase__srv__AddInts_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription base_interfase__srv__AddInts_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {base_interfase__srv__AddInts_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {base_interfase__srv__AddInts_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfase__srv__AddInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfase__srv__AddInts_Event__TYPE_NAME, 32, 32},
      {base_interfase__srv__AddInts_Event__FIELDS, 3, 3},
    },
    {base_interfase__srv__AddInts_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = base_interfase__srv__AddInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = base_interfase__srv__AddInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num1\n"
  "int32 num2\n"
  "---\n"
  "int32 num";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_interfase__srv__AddInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfase__srv__AddInts__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
base_interfase__srv__AddInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfase__srv__AddInts_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
base_interfase__srv__AddInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfase__srv__AddInts_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
base_interfase__srv__AddInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfase__srv__AddInts_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfase__srv__AddInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfase__srv__AddInts__get_individual_type_description_source(NULL),
    sources[1] = *base_interfase__srv__AddInts_Event__get_individual_type_description_source(NULL);
    sources[2] = *base_interfase__srv__AddInts_Request__get_individual_type_description_source(NULL);
    sources[3] = *base_interfase__srv__AddInts_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfase__srv__AddInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfase__srv__AddInts_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfase__srv__AddInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfase__srv__AddInts_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfase__srv__AddInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfase__srv__AddInts_Event__get_individual_type_description_source(NULL),
    sources[1] = *base_interfase__srv__AddInts_Request__get_individual_type_description_source(NULL);
    sources[2] = *base_interfase__srv__AddInts_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
