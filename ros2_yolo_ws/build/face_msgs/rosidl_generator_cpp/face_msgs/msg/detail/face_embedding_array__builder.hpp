// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from face_msgs:msg/FaceEmbeddingArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_embedding_array.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__BUILDER_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "face_msgs/msg/detail/face_embedding_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace face_msgs
{

namespace msg
{

namespace builder
{

class Init_FaceEmbeddingArray_faces
{
public:
  explicit Init_FaceEmbeddingArray_faces(::face_msgs::msg::FaceEmbeddingArray & msg)
  : msg_(msg)
  {}
  ::face_msgs::msg::FaceEmbeddingArray faces(::face_msgs::msg::FaceEmbeddingArray::_faces_type arg)
  {
    msg_.faces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::face_msgs::msg::FaceEmbeddingArray msg_;
};

class Init_FaceEmbeddingArray_header
{
public:
  Init_FaceEmbeddingArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceEmbeddingArray_faces header(::face_msgs::msg::FaceEmbeddingArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FaceEmbeddingArray_faces(msg_);
  }

private:
  ::face_msgs::msg::FaceEmbeddingArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::face_msgs::msg::FaceEmbeddingArray>()
{
  return face_msgs::msg::builder::Init_FaceEmbeddingArray_header();
}

}  // namespace face_msgs

#endif  // FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__BUILDER_HPP_
