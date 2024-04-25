// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice

#ifndef HELLO_INTERFACES__MSG__DETAIL__MY_STRING__FUNCTIONS_H_
#define HELLO_INTERFACES__MSG__DETAIL__MY_STRING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hello_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "hello_interfaces/msg/detail/my_string__struct.h"

/// Initialize msg/MyString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hello_interfaces__msg__MyString
 * )) before or use
 * hello_interfaces__msg__MyString__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
bool
hello_interfaces__msg__MyString__init(hello_interfaces__msg__MyString * msg);

/// Finalize msg/MyString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
void
hello_interfaces__msg__MyString__fini(hello_interfaces__msg__MyString * msg);

/// Create msg/MyString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hello_interfaces__msg__MyString__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
hello_interfaces__msg__MyString *
hello_interfaces__msg__MyString__create();

/// Destroy msg/MyString message.
/**
 * It calls
 * hello_interfaces__msg__MyString__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
void
hello_interfaces__msg__MyString__destroy(hello_interfaces__msg__MyString * msg);

/// Check for msg/MyString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
bool
hello_interfaces__msg__MyString__are_equal(const hello_interfaces__msg__MyString * lhs, const hello_interfaces__msg__MyString * rhs);

/// Copy a msg/MyString message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
bool
hello_interfaces__msg__MyString__copy(
  const hello_interfaces__msg__MyString * input,
  hello_interfaces__msg__MyString * output);

/// Initialize array of msg/MyString messages.
/**
 * It allocates the memory for the number of elements and calls
 * hello_interfaces__msg__MyString__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
bool
hello_interfaces__msg__MyString__Sequence__init(hello_interfaces__msg__MyString__Sequence * array, size_t size);

/// Finalize array of msg/MyString messages.
/**
 * It calls
 * hello_interfaces__msg__MyString__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
void
hello_interfaces__msg__MyString__Sequence__fini(hello_interfaces__msg__MyString__Sequence * array);

/// Create array of msg/MyString messages.
/**
 * It allocates the memory for the array and calls
 * hello_interfaces__msg__MyString__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
hello_interfaces__msg__MyString__Sequence *
hello_interfaces__msg__MyString__Sequence__create(size_t size);

/// Destroy array of msg/MyString messages.
/**
 * It calls
 * hello_interfaces__msg__MyString__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
void
hello_interfaces__msg__MyString__Sequence__destroy(hello_interfaces__msg__MyString__Sequence * array);

/// Check for msg/MyString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
bool
hello_interfaces__msg__MyString__Sequence__are_equal(const hello_interfaces__msg__MyString__Sequence * lhs, const hello_interfaces__msg__MyString__Sequence * rhs);

/// Copy an array of msg/MyString messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hello_interfaces
bool
hello_interfaces__msg__MyString__Sequence__copy(
  const hello_interfaces__msg__MyString__Sequence * input,
  hello_interfaces__msg__MyString__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HELLO_INTERFACES__MSG__DETAIL__MY_STRING__FUNCTIONS_H_
