// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "face_msgs/msg/detail/face__functions.h"
#include "face_msgs/msg/detail/face__struct.hpp"
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

void Face_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) face_msgs::msg::Face(_init);
}

void Face_fini_function(void * message_memory)
{
  auto typed_message = static_cast<face_msgs::msg::Face *>(message_memory);
  typed_message->~Face();
}

size_t size_function__Face__embedding(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Face__embedding(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Face__embedding(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Face__embedding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Face__embedding(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Face__embedding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Face__embedding(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Face__embedding(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Face_message_member_array[2] = {
  {
    "detection",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_msgs::msg::Detection2D>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs::msg::Face, detection),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "embedding",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs::msg::Face, embedding),  // bytes offset in struct
    nullptr,  // default value
    size_function__Face__embedding,  // size() function pointer
    get_const_function__Face__embedding,  // get_const(index) function pointer
    get_function__Face__embedding,  // get(index) function pointer
    fetch_function__Face__embedding,  // fetch(index, &value) function pointer
    assign_function__Face__embedding,  // assign(index, value) function pointer
    resize_function__Face__embedding  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Face_message_members = {
  "face_msgs::msg",  // message namespace
  "Face",  // message name
  2,  // number of fields
  sizeof(face_msgs::msg::Face),
  false,  // has_any_key_member_
  Face_message_member_array,  // message members
  Face_init_function,  // function to initialize message memory (memory has to be allocated)
  Face_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Face_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Face_message_members,
  get_message_typesupport_handle_function,
  &face_msgs__msg__Face__get_type_hash,
  &face_msgs__msg__Face__get_type_description,
  &face_msgs__msg__Face__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace face_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<face_msgs::msg::Face>()
{
  return &::face_msgs::msg::rosidl_typesupport_introspection_cpp::Face_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, face_msgs, msg, Face)() {
  return &::face_msgs::msg::rosidl_typesupport_introspection_cpp::Face_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
