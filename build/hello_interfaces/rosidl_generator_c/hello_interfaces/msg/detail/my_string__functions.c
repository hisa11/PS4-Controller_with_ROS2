// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice
#include "hello_interfaces/msg/detail/my_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
hello_interfaces__msg__MyString__init(hello_interfaces__msg__MyString * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    hello_interfaces__msg__MyString__fini(msg);
    return false;
  }
  return true;
}

void
hello_interfaces__msg__MyString__fini(hello_interfaces__msg__MyString * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
hello_interfaces__msg__MyString__are_equal(const hello_interfaces__msg__MyString * lhs, const hello_interfaces__msg__MyString * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
hello_interfaces__msg__MyString__copy(
  const hello_interfaces__msg__MyString * input,
  hello_interfaces__msg__MyString * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

hello_interfaces__msg__MyString *
hello_interfaces__msg__MyString__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_interfaces__msg__MyString * msg = (hello_interfaces__msg__MyString *)allocator.allocate(sizeof(hello_interfaces__msg__MyString), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hello_interfaces__msg__MyString));
  bool success = hello_interfaces__msg__MyString__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hello_interfaces__msg__MyString__destroy(hello_interfaces__msg__MyString * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hello_interfaces__msg__MyString__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hello_interfaces__msg__MyString__Sequence__init(hello_interfaces__msg__MyString__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_interfaces__msg__MyString * data = NULL;

  if (size) {
    data = (hello_interfaces__msg__MyString *)allocator.zero_allocate(size, sizeof(hello_interfaces__msg__MyString), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hello_interfaces__msg__MyString__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hello_interfaces__msg__MyString__fini(&data[i - 1]);
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
hello_interfaces__msg__MyString__Sequence__fini(hello_interfaces__msg__MyString__Sequence * array)
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
      hello_interfaces__msg__MyString__fini(&array->data[i]);
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

hello_interfaces__msg__MyString__Sequence *
hello_interfaces__msg__MyString__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_interfaces__msg__MyString__Sequence * array = (hello_interfaces__msg__MyString__Sequence *)allocator.allocate(sizeof(hello_interfaces__msg__MyString__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hello_interfaces__msg__MyString__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hello_interfaces__msg__MyString__Sequence__destroy(hello_interfaces__msg__MyString__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hello_interfaces__msg__MyString__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hello_interfaces__msg__MyString__Sequence__are_equal(const hello_interfaces__msg__MyString__Sequence * lhs, const hello_interfaces__msg__MyString__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hello_interfaces__msg__MyString__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hello_interfaces__msg__MyString__Sequence__copy(
  const hello_interfaces__msg__MyString__Sequence * input,
  hello_interfaces__msg__MyString__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hello_interfaces__msg__MyString);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hello_interfaces__msg__MyString * data =
      (hello_interfaces__msg__MyString *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hello_interfaces__msg__MyString__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hello_interfaces__msg__MyString__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hello_interfaces__msg__MyString__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
