// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hello_interfaces/msg/detail/my_string__rosidl_typesupport_introspection_c.h"
#include "hello_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hello_interfaces/msg/detail/my_string__functions.h"
#include "hello_interfaces/msg/detail/my_string__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hello_interfaces__msg__MyString__init(message_memory);
}

void hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_fini_function(void * message_memory)
{
  hello_interfaces__msg__MyString__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hello_interfaces__msg__MyString, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_members = {
  "hello_interfaces__msg",  // message namespace
  "MyString",  // message name
  1,  // number of fields
  sizeof(hello_interfaces__msg__MyString),
  hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_member_array,  // message members
  hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_init_function,  // function to initialize message memory (memory has to be allocated)
  hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_type_support_handle = {
  0,
  &hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hello_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hello_interfaces, msg, MyString)() {
  if (!hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_type_support_handle.typesupport_identifier) {
    hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hello_interfaces__msg__MyString__rosidl_typesupport_introspection_c__MyString_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
