// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE__BUILDER_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "face_msgs/msg/detail/face__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace face_msgs
{

namespace msg
{

namespace builder
{

class Init_Face_embedding
{
public:
  explicit Init_Face_embedding(::face_msgs::msg::Face & msg)
  : msg_(msg)
  {}
  ::face_msgs::msg::Face embedding(::face_msgs::msg::Face::_embedding_type arg)
  {
    msg_.embedding = std::move(arg);
    return std::move(msg_);
  }

private:
  ::face_msgs::msg::Face msg_;
};

class Init_Face_detection
{
public:
  Init_Face_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Face_embedding detection(::face_msgs::msg::Face::_detection_type arg)
  {
    msg_.detection = std::move(arg);
    return Init_Face_embedding(msg_);
  }

private:
  ::face_msgs::msg::Face msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::face_msgs::msg::Face>()
{
  return face_msgs::msg::builder::Init_Face_detection();
}

}  // namespace face_msgs

#endif  // FACE_MSGS__MSG__DETAIL__FACE__BUILDER_HPP_
