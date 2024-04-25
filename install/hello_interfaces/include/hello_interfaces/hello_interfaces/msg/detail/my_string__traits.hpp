// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice

#ifndef HELLO_INTERFACES__MSG__DETAIL__MY_STRING__TRAITS_HPP_
#define HELLO_INTERFACES__MSG__DETAIL__MY_STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hello_interfaces/msg/detail/my_string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hello_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyString & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyString & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyString & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hello_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use hello_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hello_interfaces::msg::MyString & msg,
  std::ostream & out, size_t indentation = 0)
{
  hello_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hello_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const hello_interfaces::msg::MyString & msg)
{
  return hello_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hello_interfaces::msg::MyString>()
{
  return "hello_interfaces::msg::MyString";
}

template<>
inline const char * name<hello_interfaces::msg::MyString>()
{
  return "hello_interfaces/msg/MyString";
}

template<>
struct has_fixed_size<hello_interfaces::msg::MyString>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_interfaces::msg::MyString>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hello_interfaces::msg::MyString>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HELLO_INTERFACES__MSG__DETAIL__MY_STRING__TRAITS_HPP_
