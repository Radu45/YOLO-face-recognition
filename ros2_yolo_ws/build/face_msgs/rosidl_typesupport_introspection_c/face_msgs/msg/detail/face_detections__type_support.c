// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from face_msgs:msg/FaceDetections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "face_msgs/msg/detail/face_detections__rosidl_typesupport_introspection_c.h"
#include "face_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "face_msgs/msg/detail/face_detections__functions.h"
#include "face_msgs/msg/detail/face_detections__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "vision_msgs/msg/detection2_d_array.h"
// Member `detections`
#include "vision_msgs/msg/detail/detection2_d_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  face_msgs__msg__FaceDetections__init(message_memory);
}

void face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_fini_function(void * message_memory)
{
  face_msgs__msg__FaceDetections__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs__msg__FaceDetections, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs__msg__FaceDetections, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs__msg__FaceDetections, detections),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_members = {
  "face_msgs__msg",  // message namespace
  "FaceDetections",  // message name
  3,  // number of fields
  sizeof(face_msgs__msg__FaceDetections),
  false,  // has_any_key_member_
  face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_member_array,  // message members
  face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_type_support_handle = {
  0,
  &face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_members,
  get_message_typesupport_handle_function,
  &face_msgs__msg__FaceDetections__get_type_hash,
  &face_msgs__msg__FaceDetections__get_type_description,
  &face_msgs__msg__FaceDetections__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_face_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, face_msgs, msg, FaceDetections)() {
  face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, Detection2DArray)();
  if (!face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_type_support_handle.typesupport_identifier) {
    face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &face_msgs__msg__FaceDetections__rosidl_typesupport_introspection_c__FaceDetections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
