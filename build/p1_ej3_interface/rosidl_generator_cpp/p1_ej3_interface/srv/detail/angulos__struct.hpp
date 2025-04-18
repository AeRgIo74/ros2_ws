// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from p1_ej3_interface:srv/Angulos.idl
// generated code does not contain a copyright notice

#ifndef P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__STRUCT_HPP_
#define P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__p1_ej3_interface__srv__Angulos_Request __attribute__((deprecated))
#else
# define DEPRECATED__p1_ej3_interface__srv__Angulos_Request __declspec(deprecated)
#endif

namespace p1_ej3_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Angulos_Request_
{
  using Type = Angulos_Request_<ContainerAllocator>;

  explicit Angulos_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta1 = 0.0;
      this->theta2 = 0.0;
      this->theta3 = 0.0;
      this->theta4 = 0.0;
    }
  }

  explicit Angulos_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta1 = 0.0;
      this->theta2 = 0.0;
      this->theta3 = 0.0;
      this->theta4 = 0.0;
    }
  }

  // field types and members
  using _theta1_type =
    double;
  _theta1_type theta1;
  using _theta2_type =
    double;
  _theta2_type theta2;
  using _theta3_type =
    double;
  _theta3_type theta3;
  using _theta4_type =
    double;
  _theta4_type theta4;

  // setters for named parameter idiom
  Type & set__theta1(
    const double & _arg)
  {
    this->theta1 = _arg;
    return *this;
  }
  Type & set__theta2(
    const double & _arg)
  {
    this->theta2 = _arg;
    return *this;
  }
  Type & set__theta3(
    const double & _arg)
  {
    this->theta3 = _arg;
    return *this;
  }
  Type & set__theta4(
    const double & _arg)
  {
    this->theta4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__p1_ej3_interface__srv__Angulos_Request
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__p1_ej3_interface__srv__Angulos_Request
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Angulos_Request_ & other) const
  {
    if (this->theta1 != other.theta1) {
      return false;
    }
    if (this->theta2 != other.theta2) {
      return false;
    }
    if (this->theta3 != other.theta3) {
      return false;
    }
    if (this->theta4 != other.theta4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Angulos_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Angulos_Request_

// alias to use template instance with default allocator
using Angulos_Request =
  p1_ej3_interface::srv::Angulos_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace p1_ej3_interface


#ifndef _WIN32
# define DEPRECATED__p1_ej3_interface__srv__Angulos_Response __attribute__((deprecated))
#else
# define DEPRECATED__p1_ej3_interface__srv__Angulos_Response __declspec(deprecated)
#endif

namespace p1_ej3_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Angulos_Response_
{
  using Type = Angulos_Response_<ContainerAllocator>;

  explicit Angulos_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit Angulos_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__p1_ej3_interface__srv__Angulos_Response
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__p1_ej3_interface__srv__Angulos_Response
    std::shared_ptr<p1_ej3_interface::srv::Angulos_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Angulos_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Angulos_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Angulos_Response_

// alias to use template instance with default allocator
using Angulos_Response =
  p1_ej3_interface::srv::Angulos_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace p1_ej3_interface

namespace p1_ej3_interface
{

namespace srv
{

struct Angulos
{
  using Request = p1_ej3_interface::srv::Angulos_Request;
  using Response = p1_ej3_interface::srv::Angulos_Response;
};

}  // namespace srv

}  // namespace p1_ej3_interface

#endif  // P1_EJ3_INTERFACE__SRV__DETAIL__ANGULOS__STRUCT_HPP_
