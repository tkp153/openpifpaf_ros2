// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openpifpaf_ros2_msgs:msg/Pose3D.idl
// generated code does not contain a copyright notice

#ifndef OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__STRUCT_HPP_
#define OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3D __attribute__((deprecated))
#else
# define DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3D __declspec(deprecated)
#endif

namespace openpifpaf_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose3D_
{
  using Type = Pose3D_<ContainerAllocator>;

  explicit Pose3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0;
      this->pos_y = 0.0;
      this->pos_z = 0.0;
      this->theta = 0.0;
      this->dir_x = 0.0;
      this->dir_y = 0.0;
      this->dir_z = 0.0;
    }
  }

  explicit Pose3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0;
      this->pos_y = 0.0;
      this->pos_z = 0.0;
      this->theta = 0.0;
      this->dir_x = 0.0;
      this->dir_y = 0.0;
      this->dir_z = 0.0;
    }
  }

  // field types and members
  using _pos_x_type =
    double;
  _pos_x_type pos_x;
  using _pos_y_type =
    double;
  _pos_y_type pos_y;
  using _pos_z_type =
    double;
  _pos_z_type pos_z;
  using _theta_type =
    double;
  _theta_type theta;
  using _dir_x_type =
    double;
  _dir_x_type dir_x;
  using _dir_y_type =
    double;
  _dir_y_type dir_y;
  using _dir_z_type =
    double;
  _dir_z_type dir_z;

  // setters for named parameter idiom
  Type & set__pos_x(
    const double & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const double & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__pos_z(
    const double & _arg)
  {
    this->pos_z = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__dir_x(
    const double & _arg)
  {
    this->dir_x = _arg;
    return *this;
  }
  Type & set__dir_y(
    const double & _arg)
  {
    this->dir_y = _arg;
    return *this;
  }
  Type & set__dir_z(
    const double & _arg)
  {
    this->dir_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3D
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openpifpaf_ros2_msgs__msg__Pose3D
    std::shared_ptr<openpifpaf_ros2_msgs::msg::Pose3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose3D_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->pos_z != other.pos_z) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->dir_x != other.dir_x) {
      return false;
    }
    if (this->dir_y != other.dir_y) {
      return false;
    }
    if (this->dir_z != other.dir_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose3D_

// alias to use template instance with default allocator
using Pose3D =
  openpifpaf_ros2_msgs::msg::Pose3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openpifpaf_ros2_msgs

#endif  // OPENPIFPAF_ROS2_MSGS__MSG__DETAIL__POSE3_D__STRUCT_HPP_
