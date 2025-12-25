// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from face_msgs:msg/FaceDetections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "face_msgs/msg/detail/face_detections__functions.h"
#include "face_msgs/msg/detail/face_detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace face_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FaceDetections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) face_msgs::msg::FaceDetections(_init);
}

void FaceDetections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<face_msgs::msg::FaceDetections *>(message_memory);
  typed_message->~FaceDetections();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FaceDetections_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs::msg::FaceDetections, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs::msg::FaceDetections, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_msgs::msg::Detection2DArray>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs::msg::FaceDetections, detections),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FaceDetections_message_members = {
  "face_msgs::msg",  // message namespace
  "FaceDetections",  // message name
  3,  // number of fields
  sizeof(face_msgs::msg::FaceDetections),
  false,  // has_any_key_member_
  FaceDetections_message_member_array,  // message members
  FaceDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FaceDetections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FaceDetections_message_members,
  get_message_typesupport_handle_function,
  &face_msgs__msg__FaceDetections__get_type_hash,
  &face_msgs__msg__FaceDetections__get_type_description,
  &face_msgs__msg__FaceDetections__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace face_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<face_msgs::msg::FaceDetections>()
{
  return &::face_msgs::msg::rosidl_typesupport_introspection_cpp::FaceDetections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, face_msgs, msg, FaceDetections)() {
  return &::face_msgs::msg::rosidl_typesupport_introspection_cpp::FaceDetections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
