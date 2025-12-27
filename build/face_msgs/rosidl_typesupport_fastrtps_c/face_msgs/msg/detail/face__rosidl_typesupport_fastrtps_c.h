// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice
#ifndef FACE_MSGS__MSG__DETAIL__FACE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define FACE_MSGS__MSG__DETAIL__FACE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "face_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "face_msgs/msg/detail/face__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
bool cdr_serialize_face_msgs__msg__Face(
  const face_msgs__msg__Face * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
bool cdr_deserialize_face_msgs__msg__Face(
  eprosima::fastcdr::Cdr &,
  face_msgs__msg__Face * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
size_t get_serialized_size_face_msgs__msg__Face(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
size_t max_serialized_size_face_msgs__msg__Face(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
bool cdr_serialize_key_face_msgs__msg__Face(
  const face_msgs__msg__Face * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
size_t get_serialized_size_key_face_msgs__msg__Face(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
size_t max_serialized_size_key_face_msgs__msg__Face(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_face_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, face_msgs, msg, Face)();

#ifdef __cplusplus
}
#endif

#endif  // FACE_MSGS__MSG__DETAIL__FACE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
