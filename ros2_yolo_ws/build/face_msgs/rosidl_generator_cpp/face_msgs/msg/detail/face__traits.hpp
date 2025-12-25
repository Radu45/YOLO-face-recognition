// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE__TRAITS_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "face_msgs/msg/detail/face__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detection'
#include "vision_msgs/msg/detail/detection2_d__traits.hpp"

namespace face_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Face & msg,
  std::ostream & out)
{
  out << "{";
  // member: detection
  {
    out << "detection: ";
    to_flow_style_yaml(msg.detection, out);
    out << ", ";
  }

  // member: embedding
  {
    if (msg.embedding.size() == 0) {
      out << "embedding: []";
    } else {
      out << "embedding: [";
      size_t pending_items = msg.embedding.size();
      for (auto item : msg.embedding) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Face & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection:\n";
    to_block_style_yaml(msg.detection, out, indentation + 2);
  }

  // member: embedding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.embedding.size() == 0) {
      out << "embedding: []\n";
    } else {
      out << "embedding:\n";
      for (auto item : msg.embedding) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Face & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace face_msgs

namespace rosidl_generator_traits
{

[[deprecated("use face_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const face_msgs::msg::Face & msg,
  std::ostream & out, size_t indentation = 0)
{
  face_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use face_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const face_msgs::msg::Face & msg)
{
  return face_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<face_msgs::msg::Face>()
{
  return "face_msgs::msg::Face";
}

template<>
inline const char * name<face_msgs::msg::Face>()
{
  return "face_msgs/msg/Face";
}

template<>
struct has_fixed_size<face_msgs::msg::Face>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<face_msgs::msg::Face>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<face_msgs::msg::Face>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FACE_MSGS__MSG__DETAIL__FACE__TRAITS_HPP_
