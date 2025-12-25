// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "face_msgs/msg/detail/face__functions.h"
#include "face_msgs/msg/detail/face__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace face_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Face_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Face_type_support_ids_t;

static const _Face_type_support_ids_t _Face_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Face_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Face_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Face_type_support_symbol_names_t _Face_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, face_msgs, msg, Face)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, face_msgs, msg, Face)),
  }
};

typedef struct _Face_type_support_data_t
{
  void * data[2];
} _Face_type_support_data_t;

static _Face_type_support_data_t _Face_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Face_message_typesupport_map = {
  2,
  "face_msgs",
  &_Face_message_typesupport_ids.typesupport_identifier[0],
  &_Face_message_typesupport_symbol_names.symbol_name[0],
  &_Face_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Face_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Face_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &face_msgs__msg__Face__get_type_hash,
  &face_msgs__msg__Face__get_type_description,
  &face_msgs__msg__Face__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace face_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<face_msgs::msg::Face>()
{
  return &::face_msgs::msg::rosidl_typesupport_cpp::Face_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, face_msgs, msg, Face)() {
  return get_message_type_support_handle<face_msgs::msg::Face>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
