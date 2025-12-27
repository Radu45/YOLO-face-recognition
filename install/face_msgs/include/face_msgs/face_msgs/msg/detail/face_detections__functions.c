// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from face_msgs:msg/FaceDetections.idl
// generated code does not contain a copyright notice
#include "face_msgs/msg/detail/face_detections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `detections`
#include "vision_msgs/msg/detail/detection2_d_array__functions.h"

bool
face_msgs__msg__FaceDetections__init(face_msgs__msg__FaceDetections * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    face_msgs__msg__FaceDetections__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    face_msgs__msg__FaceDetections__fini(msg);
    return false;
  }
  // detections
  if (!vision_msgs__msg__Detection2DArray__init(&msg->detections)) {
    face_msgs__msg__FaceDetections__fini(msg);
    return false;
  }
  return true;
}

void
face_msgs__msg__FaceDetections__fini(face_msgs__msg__FaceDetections * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // detections
  vision_msgs__msg__Detection2DArray__fini(&msg->detections);
}

bool
face_msgs__msg__FaceDetections__are_equal(const face_msgs__msg__FaceDetections * lhs, const face_msgs__msg__FaceDetections * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // detections
  if (!vision_msgs__msg__Detection2DArray__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
face_msgs__msg__FaceDetections__copy(
  const face_msgs__msg__FaceDetections * input,
  face_msgs__msg__FaceDetections * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // detections
  if (!vision_msgs__msg__Detection2DArray__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

face_msgs__msg__FaceDetections *
face_msgs__msg__FaceDetections__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msgs__msg__FaceDetections * msg = (face_msgs__msg__FaceDetections *)allocator.allocate(sizeof(face_msgs__msg__FaceDetections), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(face_msgs__msg__FaceDetections));
  bool success = face_msgs__msg__FaceDetections__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
face_msgs__msg__FaceDetections__destroy(face_msgs__msg__FaceDetections * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    face_msgs__msg__FaceDetections__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
face_msgs__msg__FaceDetections__Sequence__init(face_msgs__msg__FaceDetections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msgs__msg__FaceDetections * data = NULL;

  if (size) {
    data = (face_msgs__msg__FaceDetections *)allocator.zero_allocate(size, sizeof(face_msgs__msg__FaceDetections), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = face_msgs__msg__FaceDetections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        face_msgs__msg__FaceDetections__fini(&data[i - 1]);
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
face_msgs__msg__FaceDetections__Sequence__fini(face_msgs__msg__FaceDetections__Sequence * array)
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
      face_msgs__msg__FaceDetections__fini(&array->data[i]);
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

face_msgs__msg__FaceDetections__Sequence *
face_msgs__msg__FaceDetections__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  face_msgs__msg__FaceDetections__Sequence * array = (face_msgs__msg__FaceDetections__Sequence *)allocator.allocate(sizeof(face_msgs__msg__FaceDetections__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = face_msgs__msg__FaceDetections__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
face_msgs__msg__FaceDetections__Sequence__destroy(face_msgs__msg__FaceDetections__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    face_msgs__msg__FaceDetections__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
face_msgs__msg__FaceDetections__Sequence__are_equal(const face_msgs__msg__FaceDetections__Sequence * lhs, const face_msgs__msg__FaceDetections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!face_msgs__msg__FaceDetections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
face_msgs__msg__FaceDetections__Sequence__copy(
  const face_msgs__msg__FaceDetections__Sequence * input,
  face_msgs__msg__FaceDetections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(face_msgs__msg__FaceDetections);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    face_msgs__msg__FaceDetections * data =
      (face_msgs__msg__FaceDetections *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!face_msgs__msg__FaceDetections__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          face_msgs__msg__FaceDetections__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!face_msgs__msg__FaceDetections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
