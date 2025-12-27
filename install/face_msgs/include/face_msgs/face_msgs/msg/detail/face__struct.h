// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face.h"


#ifndef FACE_MSGS__MSG__DETAIL__FACE__STRUCT_H_
#define FACE_MSGS__MSG__DETAIL__FACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'detection'
#include "vision_msgs/msg/detail/detection2_d__struct.h"
// Member 'embedding'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Face in the package face_msgs.
typedef struct face_msgs__msg__Face
{
  vision_msgs__msg__Detection2D detection;
  rosidl_runtime_c__float__Sequence embedding;
} face_msgs__msg__Face;

// Struct for a sequence of face_msgs__msg__Face.
typedef struct face_msgs__msg__Face__Sequence
{
  face_msgs__msg__Face * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} face_msgs__msg__Face__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FACE_MSGS__MSG__DETAIL__FACE__STRUCT_H_
