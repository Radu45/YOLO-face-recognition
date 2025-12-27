// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from face_msgs:msg/FaceDetections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_detections.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__BUILDER_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "face_msgs/msg/detail/face_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace face_msgs
{

namespace msg
{

namespace builder
{

class Init_FaceDetections_detections
{
public:
  explicit Init_FaceDetections_detections(::face_msgs::msg::FaceDetections & msg)
  : msg_(msg)
  {}
  ::face_msgs::msg::FaceDetections detections(::face_msgs::msg::FaceDetections::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::face_msgs::msg::FaceDetections msg_;
};

class Init_FaceDetections_image
{
public:
  explicit Init_FaceDetections_image(::face_msgs::msg::FaceDetections & msg)
  : msg_(msg)
  {}
  Init_FaceDetections_detections image(::face_msgs::msg::FaceDetections::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_FaceDetections_detections(msg_);
  }

private:
  ::face_msgs::msg::FaceDetections msg_;
};

class Init_FaceDetections_header
{
public:
  Init_FaceDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceDetections_image header(::face_msgs::msg::FaceDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FaceDetections_image(msg_);
  }

private:
  ::face_msgs::msg::FaceDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::face_msgs::msg::FaceDetections>()
{
  return face_msgs::msg::builder::Init_FaceDetections_header();
}

}  // namespace face_msgs

#endif  // FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__BUILDER_HPP_
