// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mma_interfaces:msg/Fighter.idl
// generated code does not contain a copyright notice

#ifndef MMA_INTERFACES__MSG__DETAIL__FIGHTER__STRUCT_HPP_
#define MMA_INTERFACES__MSG__DETAIL__FIGHTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mma_interfaces__msg__Fighter __attribute__((deprecated))
#else
# define DEPRECATED__mma_interfaces__msg__Fighter __declspec(deprecated)
#endif

namespace mma_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Fighter_
{
  using Type = Fighter_<ContainerAllocator>;

  explicit Fighter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->weight = 0.0f;
      this->style = "";
    }
  }

  explicit Fighter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    style(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->weight = 0.0f;
      this->style = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _weight_type =
    float;
  _weight_type weight;
  using _style_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _style_type style;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__weight(
    const float & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__style(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->style = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mma_interfaces::msg::Fighter_<ContainerAllocator> *;
  using ConstRawPtr =
    const mma_interfaces::msg::Fighter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::msg::Fighter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mma_interfaces::msg::Fighter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mma_interfaces__msg__Fighter
    std::shared_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mma_interfaces__msg__Fighter
    std::shared_ptr<mma_interfaces::msg::Fighter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fighter_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    if (this->style != other.style) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fighter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fighter_

// alias to use template instance with default allocator
using Fighter =
  mma_interfaces::msg::Fighter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mma_interfaces

#endif  // MMA_INTERFACES__MSG__DETAIL__FIGHTER__STRUCT_HPP_
