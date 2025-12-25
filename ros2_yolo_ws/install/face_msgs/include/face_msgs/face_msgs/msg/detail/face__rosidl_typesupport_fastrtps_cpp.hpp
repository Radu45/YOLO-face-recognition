// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef FACE_MSGS__MSG__DETAIL__FACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "face_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "face_msgs/msg/detail/face__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace face_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
cdr_serialize(
  const face_msgs::msg::Face & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  face_msgs::msg::Face & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
get_serialized_size(
  const face_msgs::msg::Face & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
max_serialized_size_Face(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
cdr_serialize_key(
  const face_msgs::msg::Face & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
get_serialized_size_key(
  const face_msgs::msg::Face & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
max_serialized_size_key_Face(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace face_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, face_msgs, msg, Face)();

#ifdef __cplusplus
}
#endif

#endif  // FACE_MSGS__MSG__DETAIL__FACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
