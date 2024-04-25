// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hello_interfaces:msg/MyString.idl
// generated code does not contain a copyright notice

#ifndef HELLO_INTERFACES__MSG__DETAIL__MY_STRING__STRUCT_HPP_
#define HELLO_INTERFACES__MSG__DETAIL__MY_STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hello_interfaces__msg__MyString __attribute__((deprecated))
#else
# define DEPRECATED__hello_interfaces__msg__MyString __declspec(deprecated)
#endif

namespace hello_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyString_
{
  using Type = MyString_<ContainerAllocator>;

  explicit MyString_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit MyString_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hello_interfaces::msg::MyString_<ContainerAllocator> *;
  using ConstRawPtr =
    const hello_interfaces::msg::MyString_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hello_interfaces::msg::MyString_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hello_interfaces::msg::MyString_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hello_interfaces::msg::MyString_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hello_interfaces::msg::MyString_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hello_interfaces::msg::MyString_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hello_interfaces::msg::MyString_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hello_interfaces::msg::MyString_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hello_interfaces::msg::MyString_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hello_interfaces__msg__MyString
    std::shared_ptr<hello_interfaces::msg::MyString_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hello_interfaces__msg__MyString
    std::shared_ptr<hello_interfaces::msg::MyString_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyString_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyString_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyString_

// alias to use template instance with default allocator
using MyString =
  hello_interfaces::msg::MyString_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hello_interfaces

#endif  // HELLO_INTERFACES__MSG__DETAIL__MY_STRING__STRUCT_HPP_
