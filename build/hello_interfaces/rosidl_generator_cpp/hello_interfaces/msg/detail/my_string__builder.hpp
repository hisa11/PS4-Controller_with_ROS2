// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice

#ifndef HELLO_INTERFACES__MSG__DETAIL__MY_STRING__BUILDER_HPP_
#define HELLO_INTERFACES__MSG__DETAIL__MY_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hello_interfaces/msg/detail/my_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hello_interfaces
{

namespace msg
{

namespace builder
{

class Init_MyString_data
{
public:
  Init_MyString_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hello_interfaces::msg::MyString data(::hello_interfaces::msg::MyString::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hello_interfaces::msg::MyString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hello_interfaces::msg::MyString>()
{
  return hello_interfaces::msg::builder::Init_MyString_data();
}

}  // namespace hello_interfaces

#endif  // HELLO_INTERFACES__MSG__DETAIL__MY_STRING__BUILDER_HPP_
