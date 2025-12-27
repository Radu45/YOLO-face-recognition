// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from face_msgs:msg/Face.idl
// generated code does not contain a copyright notice
#include "face_msgs/msg/detail/face__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection`
#include "vision_msgs/msg/detail/detection2_d__functions.h"
// Member `embedding`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
face_msgs__msg__Face__init(face_msgs__msg__Face * msg)
{
  if (!msg) {
    return false;
  }
  // detection
  if (!vision_msgs__msg__Detection2D__init(&msg->detection)) {
    face_msgs__msg__Face__fini(msg);
    return false;
  }
  // embedding
  if (!rosidl_runtime_c__float__Sequence__init(&msg->embedding, 0)) {
    face_msgs__msg__Face__fini(msg);
    return false;
  }
  return true;
}

void
face_msgs__msg__Face__fini(face_msgs__msg__Face * msg)
{
  if (!msg) {
    return;
  }
  // detection
  vision_msgs__msg__Detection2D__fini(&msg->detection);
  // embedding
  rosidl_runtime_c__float__Sequence__fini(&msg->embedding);
}

bool
face_msgs__msg__Face__are_equal(const face_msgs__msg__Face * lhs, const face_msgs__msg__Face * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detection
  if (!vision_msgs__msg__Detection2D__are_equal(
      &(lhs->detection), &(rhs->detection)))
  {
    return false;
  }
  // embedding
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->embedding), &(rhs->embedding)))
  {
    return false;
  }
  return true;
}

bool
face_msgs__msg__Face__copy(
  const face_msgs__msg__Face * input,
  face_msgs__msg__Face * output)
{
  if (!input || !output) {
    return false;
  }
  // detection
  if (!vision_msgs__msg__Detection2D__copy(
      &(input->detection), &(output->detection)))
  {
    return false;
  }
  // embedding
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->embedding), &(output->embedding)))
  {
    return false;
  }
  return true;
}

face_msgs__msg__Face *
face_msgs__msg__Face__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msgs__msg__Face * msg = (face_msgs__msg__Face *)allocator.allocate(sizeof(face_msgs__msg__Face), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(face_msgs__msg__Face));
  bool success = face_msgs__msg__Face__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
face_msgs__msg__Face__destroy(face_msgs__msg__Face * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    face_msgs__msg__Face__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
face_msgs__msg__Face__Sequence__init(face_msgs__msg__Face__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msgs__msg__Face * data = NULL;

  if (size) {
    data = (face_msgs__msg__Face *)allocator.zero_allocate(size, sizeof(face_msgs__msg__Face), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = face_msgs__msg__Face__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        face_msgs__msg__Face__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
face_msgs__msg__Face__Sequence__fini(face_msgs__msg__Face__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      face_msgs__msg__Face__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

face_msgs__msg__Face__Sequence *
face_msgs__msg__Face__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msgs__msg__Face__Sequence * array = (face_msgs__msg__Face__Sequence *)allocator.allocate(sizeof(face_msgs__msg__Face__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = face_msgs__msg__Face__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
face_msgs__msg__Face__Sequence__destroy(face_msgs__msg__Face__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    face_msgs__msg__Face__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
face_msgs__msg__Face__Sequence__are_equal(const face_msgs__msg__Face__Sequence * lhs, const face_msgs__msg__Face__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!face_msgs__msg__Face__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
face_msgs__msg__Face__Sequence__copy(
  const face_msgs__msg__Face__Sequence * input,
  face_msgs__msg__Face__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(face_msgs__msg__Face);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    face_msgs__msg__Face * data =
      (face_msgs__msg__Face *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!face_msgs__msg__Face__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          face_msgs__msg__Face__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!face_msgs__msg__Face__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
