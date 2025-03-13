// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from p1_ej2_interface:msg/Sensor.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__STRUCT_HPP_
#define P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__p1_ej2_interface__msg__Sensor __attribute__((deprecated))
#else
# define DEPRECATED__p1_ej2_interface__msg__Sensor __declspec(deprecated)
#endif

namespace p1_ej2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sensor_
{
  using Type = Sensor_<ContainerAllocator>;

  explicit Sensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0;
    }
  }

  explicit Sensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0;
    }
  }

  // field types and members
  using _data_type =
    double;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const double & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    p1_ej2_interface::msg::Sensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const p1_ej2_interface::msg::Sensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      p1_ej2_interface::msg::Sensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      p1_ej2_interface::msg::Sensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__p1_ej2_interface__msg__Sensor
    std::shared_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__p1_ej2_interface__msg__Sensor
    std::shared_ptr<p1_ej2_interface::msg::Sensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sensor_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sensor_

// alias to use template instance with default allocator
using Sensor =
  p1_ej2_interface::msg::Sensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace p1_ej2_interface

#endif  // P1_EJ2_INTERFACE__MSG__DETAIL__SENSOR__STRUCT_HPP_
