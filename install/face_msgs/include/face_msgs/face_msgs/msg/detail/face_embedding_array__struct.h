// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from face_msgs:msg/FaceEmbeddingArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_embedding_array.h"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__STRUCT_H_
#define FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'faces'
#include "face_msgs/msg/detail/face__struct.h"

/// Struct defined in msg/FaceEmbeddingArray in the package face_msgs.
typedef struct face_msgs__msg__FaceEmbeddingArray
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image image;
  face_msgs__msg__Face__Sequence faces;
} face_msgs__msg__FaceEmbeddingArray;

// Struct for a sequence of face_msgs__msg__FaceEmbeddingArray.
typedef struct face_msgs__msg__FaceEmbeddingArray__Sequence
{
  face_msgs__msg__FaceEmbeddingArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} face_msgs__msg__FaceEmbeddingArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FACE_MSGS__MSG__DETAIL__FACE_EMBEDDING_ARRAY__STRUCT_H_
