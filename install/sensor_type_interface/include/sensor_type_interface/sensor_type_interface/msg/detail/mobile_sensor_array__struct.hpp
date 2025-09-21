// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__STRUCT_HPP_
#define SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_type_interface__msg__MobileSensorArray __attribute__((deprecated))
#else
# define DEPRECATED__sensor_type_interface__msg__MobileSensorArray __declspec(deprecated)
#endif

namespace sensor_type_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobileSensorArray_
{
  using Type = MobileSensorArray_<ContainerAllocator>;

  explicit MobileSensorArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 5>::iterator, float>(this->accelerometer_sensor_data.begin(), this->accelerometer_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->magnetic_field_sensor_data.begin(), this->magnetic_field_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->gyroscope_sensor_data.begin(), this->gyroscope_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->light_sensor_data.begin(), this->light_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->pressure_sensor_data.begin(), this->pressure_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->proximity_sensor_data.begin(), this->proximity_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->gravity_sensor_data.begin(), this->gravity_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->relative_humidity_sensor_data.begin(), this->relative_humidity_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->temperature_sensor_data.begin(), this->temperature_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->heart_beat_sensor_data.begin(), this->heart_beat_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->orientation_sensor_data.begin(), this->orientation_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->line_sensor_sensor_data.begin(), this->line_sensor_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->position_sensor_data.begin(), this->position_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->parameter_sensor_data.begin(), this->parameter_sensor_data.end(), 0.0f);
    }
  }

  explicit MobileSensorArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accelerometer_sensor_data(_alloc),
    magnetic_field_sensor_data(_alloc),
    gyroscope_sensor_data(_alloc),
    light_sensor_data(_alloc),
    pressure_sensor_data(_alloc),
    proximity_sensor_data(_alloc),
    gravity_sensor_data(_alloc),
    relative_humidity_sensor_data(_alloc),
    temperature_sensor_data(_alloc),
    heart_beat_sensor_data(_alloc),
    orientation_sensor_data(_alloc),
    line_sensor_sensor_data(_alloc),
    position_sensor_data(_alloc),
    parameter_sensor_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 5>::iterator, float>(this->accelerometer_sensor_data.begin(), this->accelerometer_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->magnetic_field_sensor_data.begin(), this->magnetic_field_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->gyroscope_sensor_data.begin(), this->gyroscope_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->light_sensor_data.begin(), this->light_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->pressure_sensor_data.begin(), this->pressure_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->proximity_sensor_data.begin(), this->proximity_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->gravity_sensor_data.begin(), this->gravity_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->relative_humidity_sensor_data.begin(), this->relative_humidity_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->temperature_sensor_data.begin(), this->temperature_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->heart_beat_sensor_data.begin(), this->heart_beat_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->orientation_sensor_data.begin(), this->orientation_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->line_sensor_sensor_data.begin(), this->line_sensor_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->position_sensor_data.begin(), this->position_sensor_data.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->parameter_sensor_data.begin(), this->parameter_sensor_data.end(), 0.0f);
    }
  }

  // field types and members
  using _accelerometer_sensor_data_type =
    std::array<float, 5>;
  _accelerometer_sensor_data_type accelerometer_sensor_data;
  using _magnetic_field_sensor_data_type =
    std::array<float, 5>;
  _magnetic_field_sensor_data_type magnetic_field_sensor_data;
  using _gyroscope_sensor_data_type =
    std::array<float, 5>;
  _gyroscope_sensor_data_type gyroscope_sensor_data;
  using _light_sensor_data_type =
    std::array<float, 5>;
  _light_sensor_data_type light_sensor_data;
  using _pressure_sensor_data_type =
    std::array<float, 5>;
  _pressure_sensor_data_type pressure_sensor_data;
  using _proximity_sensor_data_type =
    std::array<float, 5>;
  _proximity_sensor_data_type proximity_sensor_data;
  using _gravity_sensor_data_type =
    std::array<float, 5>;
  _gravity_sensor_data_type gravity_sensor_data;
  using _relative_humidity_sensor_data_type =
    std::array<float, 5>;
  _relative_humidity_sensor_data_type relative_humidity_sensor_data;
  using _temperature_sensor_data_type =
    std::array<float, 5>;
  _temperature_sensor_data_type temperature_sensor_data;
  using _heart_beat_sensor_data_type =
    std::array<float, 5>;
  _heart_beat_sensor_data_type heart_beat_sensor_data;
  using _orientation_sensor_data_type =
    std::array<float, 5>;
  _orientation_sensor_data_type orientation_sensor_data;
  using _line_sensor_sensor_data_type =
    std::array<float, 5>;
  _line_sensor_sensor_data_type line_sensor_sensor_data;
  using _position_sensor_data_type =
    std::array<float, 5>;
  _position_sensor_data_type position_sensor_data;
  using _parameter_sensor_data_type =
    std::array<float, 5>;
  _parameter_sensor_data_type parameter_sensor_data;

  // setters for named parameter idiom
  Type & set__accelerometer_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->accelerometer_sensor_data = _arg;
    return *this;
  }
  Type & set__magnetic_field_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->magnetic_field_sensor_data = _arg;
    return *this;
  }
  Type & set__gyroscope_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->gyroscope_sensor_data = _arg;
    return *this;
  }
  Type & set__light_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->light_sensor_data = _arg;
    return *this;
  }
  Type & set__pressure_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->pressure_sensor_data = _arg;
    return *this;
  }
  Type & set__proximity_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->proximity_sensor_data = _arg;
    return *this;
  }
  Type & set__gravity_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->gravity_sensor_data = _arg;
    return *this;
  }
  Type & set__relative_humidity_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->relative_humidity_sensor_data = _arg;
    return *this;
  }
  Type & set__temperature_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->temperature_sensor_data = _arg;
    return *this;
  }
  Type & set__heart_beat_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->heart_beat_sensor_data = _arg;
    return *this;
  }
  Type & set__orientation_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->orientation_sensor_data = _arg;
    return *this;
  }
  Type & set__line_sensor_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->line_sensor_sensor_data = _arg;
    return *this;
  }
  Type & set__position_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->position_sensor_data = _arg;
    return *this;
  }
  Type & set__parameter_sensor_data(
    const std::array<float, 5> & _arg)
  {
    this->parameter_sensor_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_type_interface__msg__MobileSensorArray
    std::shared_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_type_interface__msg__MobileSensorArray
    std::shared_ptr<sensor_type_interface::msg::MobileSensorArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobileSensorArray_ & other) const
  {
    if (this->accelerometer_sensor_data != other.accelerometer_sensor_data) {
      return false;
    }
    if (this->magnetic_field_sensor_data != other.magnetic_field_sensor_data) {
      return false;
    }
    if (this->gyroscope_sensor_data != other.gyroscope_sensor_data) {
      return false;
    }
    if (this->light_sensor_data != other.light_sensor_data) {
      return false;
    }
    if (this->pressure_sensor_data != other.pressure_sensor_data) {
      return false;
    }
    if (this->proximity_sensor_data != other.proximity_sensor_data) {
      return false;
    }
    if (this->gravity_sensor_data != other.gravity_sensor_data) {
      return false;
    }
    if (this->relative_humidity_sensor_data != other.relative_humidity_sensor_data) {
      return false;
    }
    if (this->temperature_sensor_data != other.temperature_sensor_data) {
      return false;
    }
    if (this->heart_beat_sensor_data != other.heart_beat_sensor_data) {
      return false;
    }
    if (this->orientation_sensor_data != other.orientation_sensor_data) {
      return false;
    }
    if (this->line_sensor_sensor_data != other.line_sensor_sensor_data) {
      return false;
    }
    if (this->position_sensor_data != other.position_sensor_data) {
      return false;
    }
    if (this->parameter_sensor_data != other.parameter_sensor_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobileSensorArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobileSensorArray_

// alias to use template instance with default allocator
using MobileSensorArray =
  sensor_type_interface::msg::MobileSensorArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_type_interface

#endif  // SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__STRUCT_HPP_
