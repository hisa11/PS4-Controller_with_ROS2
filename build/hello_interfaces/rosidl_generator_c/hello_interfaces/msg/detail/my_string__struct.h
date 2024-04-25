// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice

#ifndef HELLO_INTERFACES__MSG__DETAIL__MY_STRING__STRUCT_H_
#define HELLO_INTERFACES__MSG__DETAIL__MY_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MyString in the package hello_interfaces.
typedef struct hello_interfaces__msg__MyString
{
  rosidl_runtime_c__String data;
} hello_interfaces__msg__MyString;

// Struct for a sequence of hello_interfaces__msg__MyString.
typedef struct hello_interfaces__msg__MyString__Sequence
{
  hello_interfaces__msg__MyString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_interfaces__msg__MyString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLO_INTERFACES__MSG__DETAIL__MY_STRING__STRUCT_H_
