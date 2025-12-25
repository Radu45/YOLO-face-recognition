// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face.hpp"


#ifndef FACE_MSGS__MSG__DETAIL__FACE__STRUCT_HPP_
#define FACE_MSGS__MSG__DETAIL__FACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detection'
#include "vision_msgs/msg/detail/detection2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__face_msgs__msg__Face __attribute__((deprecated))
#else
# define DEPRECATED__face_msgs__msg__Face __declspec(deprecated)
#endif

namespace face_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Face_
{
  using Type = Face_<ContainerAllocator>;

  explicit Face_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    (void)_init;
  }

  explicit Face_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _detection_type =
    vision_msgs::msg::Detection2D_<ContainerAllocator>;
  _detection_type detection;
  using _embedding_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _embedding_type embedding;

  // setters for named parameter idiom
  Type & set__detection(
    const vision_msgs::msg::Detection2D_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__embedding(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->embedding = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    face_msgs::msg::Face_<ContainerAllocator> *;
  using ConstRawPtr =
    const face_msgs::msg::Face_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<face_msgs::msg::Face_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<face_msgs::msg::Face_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      face_msgs::msg::Face_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<face_msgs::msg::Face_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      face_msgs::msg::Face_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<face_msgs::msg::Face_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<face_msgs::msg::Face_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<face_msgs::msg::Face_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__face_msgs__msg__Face
    std::shared_ptr<face_msgs::msg::Face_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__face_msgs__msg__Face
    std::shared_ptr<face_msgs::msg::Face_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Face_ & other) const
  {
    if (this->detection != other.detection) {
      return false;
    }
    if (this->embedding != other.embedding) {
      return false;
    }
    return true;
  }
  bool operator!=(const Face_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Face_

// alias to use template instance with default allocator
using Face =
  face_msgs::msg::Face_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace face_msgs

#endif  // FACE_MSGS__MSG__DETAIL__FACE__STRUCT_HPP_
