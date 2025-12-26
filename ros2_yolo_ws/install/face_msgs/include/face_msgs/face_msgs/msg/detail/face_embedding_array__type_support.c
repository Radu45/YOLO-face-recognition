// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from face_msgs:msg/FaceEmbeddingArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "face_msgs/msg/detail/face_embedding_array__rosidl_typesupport_introspection_c.h"
#include "face_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "face_msgs/msg/detail/face_embedding_array__functions.h"
#include "face_msgs/msg/detail/face_embedding_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `faces`
#include "face_msgs/msg/face.h"
// Member `faces`
#include "face_msgs/msg/detail/face__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  face_msgs__msg__FaceEmbeddingArray__init(message_memory);
}

void face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_fini_function(void * message_memory)
{
  face_msgs__msg__FaceEmbeddingArray__fini(message_memory);
}

size_t face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__size_function__FaceEmbeddingArray__faces(
  const void * untyped_member)
{
  const face_msgs__msg__Face__Sequence * member =
    (const face_msgs__msg__Face__Sequence *)(untyped_member);
  return member->size;
}

const void * face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__get_const_function__FaceEmbeddingArray__faces(
  const void * untyped_member, size_t index)
{
  const face_msgs__msg__Face__Sequence * member =
    (const face_msgs__msg__Face__Sequence *)(untyped_member);
  return &member->data[index];
}

void * face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__get_function__FaceEmbeddingArray__faces(
  void * untyped_member, size_t index)
{
  face_msgs__msg__Face__Sequence * member =
    (face_msgs__msg__Face__Sequence *)(untyped_member);
  return &member->data[index];
}

void face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__fetch_function__FaceEmbeddingArray__faces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const face_msgs__msg__Face * item =
    ((const face_msgs__msg__Face *)
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__get_const_function__FaceEmbeddingArray__faces(untyped_member, index));
  face_msgs__msg__Face * value =
    (face_msgs__msg__Face *)(untyped_value);
  *value = *item;
}

void face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__assign_function__FaceEmbeddingArray__faces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  face_msgs__msg__Face * item =
    ((face_msgs__msg__Face *)
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__get_function__FaceEmbeddingArray__faces(untyped_member, index));
  const face_msgs__msg__Face * value =
    (const face_msgs__msg__Face *)(untyped_value);
  *item = *value;
}

bool face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__resize_function__FaceEmbeddingArray__faces(
  void * untyped_member, size_t size)
{
  face_msgs__msg__Face__Sequence * member =
    (face_msgs__msg__Face__Sequence *)(untyped_member);
  face_msgs__msg__Face__Sequence__fini(member);
  return face_msgs__msg__Face__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs__msg__FaceEmbeddingArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "faces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(face_msgs__msg__FaceEmbeddingArray, faces),  // bytes offset in struct
    NULL,  // default value
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__size_function__FaceEmbeddingArray__faces,  // size() function pointer
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__get_const_function__FaceEmbeddingArray__faces,  // get_const(index) function pointer
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__get_function__FaceEmbeddingArray__faces,  // get(index) function pointer
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__fetch_function__FaceEmbeddingArray__faces,  // fetch(index, &value) function pointer
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__assign_function__FaceEmbeddingArray__faces,  // assign(index, value) function pointer
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__resize_function__FaceEmbeddingArray__faces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_members = {
  "face_msgs__msg",  // message namespace
  "FaceEmbeddingArray",  // message name
  2,  // number of fields
  sizeof(face_msgs__msg__FaceEmbeddingArray),
  false,  // has_any_key_member_
  face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_member_array,  // message members
  face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_init_function,  // function to initialize message memory (memory has to be allocated)
  face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_type_support_handle = {
  0,
  &face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_members,
  get_message_typesupport_handle_function,
  &face_msgs__msg__FaceEmbeddingArray__get_type_hash,
  &face_msgs__msg__FaceEmbeddingArray__get_type_description,
  &face_msgs__msg__FaceEmbeddingArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_face_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, face_msgs, msg, FaceEmbeddingArray)() {
  face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, face_msgs, msg, Face)();
  if (!face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_type_support_handle.typesupport_identifier) {
    face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &face_msgs__msg__FaceEmbeddingArray__rosidl_typesupport_introspection_c__FaceEmbeddingArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
