// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from face_msgs:msg/FaceDetections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "face_msgs/msg/face_detections.h"


#ifndef FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__STRUCT_H_
#define FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__STRUCT_H_

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
// Member 'detections'
#include "vision_msgs/msg/detail/detection2_d_array__struct.h"

/// Struct defined in msg/FaceDetections in the package face_msgs.
/**
  * FaceDetections.msg
  * A single frame including all its detections
 */
typedef struct face_msgs__msg__FaceDetections
{
  std_msgs__msg__Header header;
  /// original frame
  sensor_msgs__msg__Image image;
  /// the face detections
  vision_msgs__msg__Detection2DArray detections;
} face_msgs__msg__FaceDetections;

// Struct for a sequence of face_msgs__msg__FaceDetections.
typedef struct face_msgs__msg__FaceDetections__Sequence
{
  face_msgs__msg__FaceDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} face_msgs__msg__FaceDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FACE_MSGS__MSG__DETAIL__FACE_DETECTIONS__STRUCT_H_
