// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rvr_msgs:msg/Wheel4.idl
// generated code does not contain a copyright notice

#ifndef RVR_MSGS__MSG__DETAIL__WHEEL4__STRUCT_HPP_
#define RVR_MSGS__MSG__DETAIL__WHEEL4__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rvr_msgs__msg__Wheel4 __attribute__((deprecated))
#else
# define DEPRECATED__rvr_msgs__msg__Wheel4 __declspec(deprecated)
#endif

namespace rvr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wheel4_
{
  using Type = Wheel4_<ContainerAllocator>;

  explicit Wheel4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel1 = 0.0f;
      this->wheel2 = 0.0f;
      this->wheel3 = 0.0f;
      this->wheel4 = 0.0f;
    }
  }

  explicit Wheel4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel1 = 0.0f;
      this->wheel2 = 0.0f;
      this->wheel3 = 0.0f;
      this->wheel4 = 0.0f;
    }
  }

  // field types and members
  using _wheel1_type =
    float;
  _wheel1_type wheel1;
  using _wheel2_type =
    float;
  _wheel2_type wheel2;
  using _wheel3_type =
    float;
  _wheel3_type wheel3;
  using _wheel4_type =
    float;
  _wheel4_type wheel4;

  // setters for named parameter idiom
  Type & set__wheel1(
    const float & _arg)
  {
    this->wheel1 = _arg;
    return *this;
  }
  Type & set__wheel2(
    const float & _arg)
  {
    this->wheel2 = _arg;
    return *this;
  }
  Type & set__wheel3(
    const float & _arg)
  {
    this->wheel3 = _arg;
    return *this;
  }
  Type & set__wheel4(
    const float & _arg)
  {
    this->wheel4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rvr_msgs::msg::Wheel4_<ContainerAllocator> *;
  using ConstRawPtr =
    const rvr_msgs::msg::Wheel4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rvr_msgs::msg::Wheel4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rvr_msgs::msg::Wheel4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rvr_msgs__msg__Wheel4
    std::shared_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rvr_msgs__msg__Wheel4
    std::shared_ptr<rvr_msgs::msg::Wheel4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wheel4_ & other) const
  {
    if (this->wheel1 != other.wheel1) {
      return false;
    }
    if (this->wheel2 != other.wheel2) {
      return false;
    }
    if (this->wheel3 != other.wheel3) {
      return false;
    }
    if (this->wheel4 != other.wheel4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wheel4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wheel4_

// alias to use template instance with default allocator
using Wheel4 =
  rvr_msgs::msg::Wheel4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rvr_msgs

#endif  // RVR_MSGS__MSG__DETAIL__WHEEL4__STRUCT_HPP_
