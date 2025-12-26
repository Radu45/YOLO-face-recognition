// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from face_msgs:msg/FaceEmbeddingArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_embedding_array.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__TRAITS_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "face_msgs/msg/detail/face_embedding_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'faces'
#include "face_msgs/msg/detail/face__traits.hpp"

namespace face_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaceEmbeddingArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: faces
  {
    if (msg.faces.size() == 0) {
      out << "faces: []";
    } else {
      out << "faces: [";
      size_t pending_items = msg.faces.size();
      for (auto item : msg.faces) {
        to_flow_style_yaml(item, out);
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
  const FaceEmbeddingArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: faces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faces.size() == 0) {
      out << "faces: []\n";
    } else {
      out << "faces:\n";
      for (auto item : msg.faces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceEmbeddingArray & msg, bool use_flow_style = false)
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
  const face_msgs::msg::FaceEmbeddingArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  face_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use face_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const face_msgs::msg::FaceEmbeddingArray & msg)
{
  return face_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<face_msgs::msg::FaceEmbeddingArray>()
{
  return "face_msgs::msg::FaceEmbeddingArray";
}

template<>
inline const char * name<face_msgs::msg::FaceEmbeddingArray>()
{
  return "face_msgs/msg/FaceEmbeddingArray";
}

template<>
struct has_fixed_size<face_msgs::msg::FaceEmbeddingArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<face_msgs::msg::FaceEmbeddingArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<face_msgs::msg::FaceEmbeddingArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__TRAITS_HPP_
