// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from face_msgs:msg/FaceDetections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_detections.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__TRAITS_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "face_msgs/msg/detail/face_detections__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'detections'
#include "vision_msgs/msg/detail/detection2_d_array__traits.hpp"

namespace face_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaceDetections & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: detections
  {
    out << "detections: ";
    to_flow_style_yaml(msg.detections, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaceDetections & msg,
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

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detections:\n";
    to_block_style_yaml(msg.detections, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaceDetections & msg, bool use_flow_style = false)
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
  const face_msgs::msg::FaceDetections & msg,
  std::ostream & out, size_t indentation = 0)
{
  face_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use face_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const face_msgs::msg::FaceDetections & msg)
{
  return face_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<face_msgs::msg::FaceDetections>()
{
  return "face_msgs::msg::FaceDetections";
}

template<>
inline const char * name<face_msgs::msg::FaceDetections>()
{
  return "face_msgs/msg/FaceDetections";
}

template<>
struct has_fixed_size<face_msgs::msg::FaceDetections>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<vision_msgs::msg::Detection2DArray>::value> {};

template<>
struct has_bounded_size<face_msgs::msg::FaceDetections>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<vision_msgs::msg::Detection2DArray>::value> {};

template<>
struct is_message<face_msgs::msg::FaceDetections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__TRAITS_HPP_
