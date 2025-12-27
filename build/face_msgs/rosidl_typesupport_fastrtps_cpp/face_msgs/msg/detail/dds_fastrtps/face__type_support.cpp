// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice
#include "face_msgs/msg/detail/face__rosidl_typesupport_fastrtps_cpp.hpp"
#include "face_msgs/msg/detail/face__functions.h"
#include "face_msgs/msg/detail/face__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace vision_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const vision_msgs::msg::Detection2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  vision_msgs::msg::Detection2D &);
size_t get_serialized_size(
  const vision_msgs::msg::Detection2D &,
  size_t current_alignment);
size_t
max_serialized_size_Detection2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const vision_msgs::msg::Detection2D &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const vision_msgs::msg::Detection2D &,
  size_t current_alignment);
size_t
max_serialized_size_key_Detection2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace vision_msgs


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detection
  vision_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.detection,
    cdr);

  // Member: embedding
  {
    cdr << ros_message.embedding;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  face_msgs::msg::Face & ros_message)
{
  // Member: detection
  vision_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.detection);

  // Member: embedding
  {
    cdr >> ros_message.embedding;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
get_serialized_size(
  const face_msgs::msg::Face & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detection
  current_alignment +=
    vision_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.detection, current_alignment);

  // Member: embedding
  {
    size_t array_size = ros_message.embedding.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.embedding[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
max_serialized_size_Face(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        vision_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Detection2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: embedding
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = face_msgs::msg::Face;
    is_plain =
      (
      offsetof(DataType, embedding) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
cdr_serialize_key(
  const face_msgs::msg::Face & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detection
  vision_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.detection,
    cdr);

  // Member: embedding
  {
    cdr << ros_message.embedding;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
get_serialized_size_key(
  const face_msgs::msg::Face & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detection
  current_alignment +=
    vision_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.detection, current_alignment);

  // Member: embedding
  {
    size_t array_size = ros_message.embedding.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.embedding[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_face_msgs
max_serialized_size_key_Face(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        vision_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Detection2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: embedding
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = face_msgs::msg::Face;
    is_plain =
      (
      offsetof(DataType, embedding) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _Face__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const face_msgs::msg::Face *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Face__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<face_msgs::msg::Face *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Face__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const face_msgs::msg::Face *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Face__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Face(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Face__callbacks = {
  "face_msgs::msg",
  "Face",
  _Face__cdr_serialize,
  _Face__cdr_deserialize,
  _Face__get_serialized_size,
  _Face__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Face__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Face__callbacks,
  get_message_typesupport_handle_function,
  &face_msgs__msg__Face__get_type_hash,
  &face_msgs__msg__Face__get_type_description,
  &face_msgs__msg__Face__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace face_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_face_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<face_msgs::msg::Face>()
{
  return &face_msgs::msg::typesupport_fastrtps_cpp::_Face__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, face_msgs, msg, Face)() {
  return &face_msgs::msg::typesupport_fastrtps_cpp::_Face__handle;
}

#ifdef __cplusplus
}
#endif
