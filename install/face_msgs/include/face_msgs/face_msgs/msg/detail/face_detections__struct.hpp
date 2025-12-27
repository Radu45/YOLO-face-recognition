// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from face_msgs:msg/FaceDetections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_detections.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__STRUCT_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__STRUCT_HPP_

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
// Member 'detections'
#include "vision_msgs/msg/detail/detection2_d_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__face_msgs__msg__FaceDetections __attribute__((deprecated))
#else
# define DEPRECATED__face_msgs__msg__FaceDetections __declspec(deprecated)
#endif

namespace face_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaceDetections_
{
  using Type = FaceDetections_<ContainerAllocator>;

  explicit FaceDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image(_init),
    detections(_init)
  {
    (void)_init;
  }

  explicit FaceDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image(_alloc, _init),
    detections(_alloc, _init)
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
  using _detections_type =
    vision_msgs::msg::Detection2DArray_<ContainerAllocator>;
  _detections_type detections;

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
  Type & set__detections(
    const vision_msgs::msg::Detection2DArray_<ContainerAllocator> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    face_msgs::msg::FaceDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const face_msgs::msg::FaceDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      face_msgs::msg::FaceDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      face_msgs::msg::FaceDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__face_msgs__msg__FaceDetections
    std::shared_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__face_msgs__msg__FaceDetections
    std::shared_ptr<face_msgs::msg::FaceDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetections_

// alias to use template instance with default allocator
using FaceDetections =
  face_msgs::msg::FaceDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace face_msgs

#endif  // FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__STRUCT_HPP_
