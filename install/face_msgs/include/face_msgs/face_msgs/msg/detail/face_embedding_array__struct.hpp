// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from face_msgs:msg/FaceEmbeddingArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_embedding_array.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__STRUCT_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'faces'
#include "face_msgs/msg/detail/face__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__face_msgs__msg__FaceEmbeddingArray __attribute__((deprecated))
#else
# define DEPRECATED__face_msgs__msg__FaceEmbeddingArray __declspec(deprecated)
#endif

namespace face_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceEmbeddingArray_
{
  using Type = FaceEmbeddingArray_<ContainerAllocator>;

  explicit FaceEmbeddingArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image(_init)
  {
    (void)_init;
  }

  explicit FaceEmbeddingArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _faces_type =
    std::vector<face_msgs::msg::Face_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<face_msgs::msg::Face_<ContainerAllocator>>>;
  _faces_type faces;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__faces(
    const std::vector<face_msgs::msg::Face_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<face_msgs::msg::Face_<ContainerAllocator>>> & _arg)
  {
    this->faces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__face_msgs__msg__FaceEmbeddingArray
    std::shared_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__face_msgs__msg__FaceEmbeddingArray
    std::shared_ptr<face_msgs::msg::FaceEmbeddingArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceEmbeddingArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->faces != other.faces) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceEmbeddingArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceEmbeddingArray_

// alias to use template instance with default allocator
using FaceEmbeddingArray =
  face_msgs::msg::FaceEmbeddingArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace face_msgs

#endif  // FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__STRUCT_HPP_
