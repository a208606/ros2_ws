// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_interfase:msg/Student.idl
// generated code does not contain a copyright notice

#include "base_interfase/msg/detail/student__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_interfase
const rosidl_type_hash_t *
base_interfase__msg__Student__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x2e, 0x40, 0xbd, 0x69, 0xe4, 0x2c, 0xa8,
      0x42, 0x83, 0xfb, 0xcb, 0x1b, 0x90, 0xa9, 0xfa,
      0x50, 0xd3, 0xb4, 0xf3, 0x6e, 0x4c, 0x50, 0xcd,
      0xf9, 0x36, 0x1e, 0xc8, 0x20, 0xf3, 0xa7, 0x15,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char base_interfase__msg__Student__TYPE_NAME[] = "base_interfase/msg/Student";

// Define type names, field names, and default values
static char base_interfase__msg__Student__FIELD_NAME__name[] = "name";
static char base_interfase__msg__Student__FIELD_NAME__age[] = "age";
static char base_interfase__msg__Student__FIELD_NAME__height[] = "height";

static rosidl_runtime_c__type_description__Field base_interfase__msg__Student__FIELDS[] = {
  {
    {base_interfase__msg__Student__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfase__msg__Student__FIELD_NAME__age, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfase__msg__Student__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_interfase__msg__Student__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfase__msg__Student__TYPE_NAME, 26, 26},
      {base_interfase__msg__Student__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string  name\n"
  "int32   age\n"
  "float64 height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_interfase__msg__Student__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfase__msg__Student__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfase__msg__Student__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfase__msg__Student__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
