// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__FUNCTIONS_H_
#define SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensor_type_interface/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_type_interface/msg/detail/mobile_sensor_array__struct.h"

/// Initialize msg/MobileSensorArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_type_interface__msg__MobileSensorArray
 * )) before or use
 * sensor_type_interface__msg__MobileSensorArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
bool
sensor_type_interface__msg__MobileSensorArray__init(sensor_type_interface__msg__MobileSensorArray * msg);

/// Finalize msg/MobileSensorArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
void
sensor_type_interface__msg__MobileSensorArray__fini(sensor_type_interface__msg__MobileSensorArray * msg);

/// Create msg/MobileSensorArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_type_interface__msg__MobileSensorArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
sensor_type_interface__msg__MobileSensorArray *
sensor_type_interface__msg__MobileSensorArray__create();

/// Destroy msg/MobileSensorArray message.
/**
 * It calls
 * sensor_type_interface__msg__MobileSensorArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
void
sensor_type_interface__msg__MobileSensorArray__destroy(sensor_type_interface__msg__MobileSensorArray * msg);

/// Check for msg/MobileSensorArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
bool
sensor_type_interface__msg__MobileSensorArray__are_equal(const sensor_type_interface__msg__MobileSensorArray * lhs, const sensor_type_interface__msg__MobileSensorArray * rhs);

/// Copy a msg/MobileSensorArray message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
bool
sensor_type_interface__msg__MobileSensorArray__copy(
  const sensor_type_interface__msg__MobileSensorArray * input,
  sensor_type_interface__msg__MobileSensorArray * output);

/// Initialize array of msg/MobileSensorArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_type_interface__msg__MobileSensorArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
bool
sensor_type_interface__msg__MobileSensorArray__Sequence__init(sensor_type_interface__msg__MobileSensorArray__Sequence * array, size_t size);

/// Finalize array of msg/MobileSensorArray messages.
/**
 * It calls
 * sensor_type_interface__msg__MobileSensorArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
void
sensor_type_interface__msg__MobileSensorArray__Sequence__fini(sensor_type_interface__msg__MobileSensorArray__Sequence * array);

/// Create array of msg/MobileSensorArray messages.
/**
 * It allocates the memory for the array and calls
 * sensor_type_interface__msg__MobileSensorArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
sensor_type_interface__msg__MobileSensorArray__Sequence *
sensor_type_interface__msg__MobileSensorArray__Sequence__create(size_t size);

/// Destroy array of msg/MobileSensorArray messages.
/**
 * It calls
 * sensor_type_interface__msg__MobileSensorArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
void
sensor_type_interface__msg__MobileSensorArray__Sequence__destroy(sensor_type_interface__msg__MobileSensorArray__Sequence * array);

/// Check for msg/MobileSensorArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
bool
sensor_type_interface__msg__MobileSensorArray__Sequence__are_equal(const sensor_type_interface__msg__MobileSensorArray__Sequence * lhs, const sensor_type_interface__msg__MobileSensorArray__Sequence * rhs);

/// Copy an array of msg/MobileSensorArray messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_type_interface
bool
sensor_type_interface__msg__MobileSensorArray__Sequence__copy(
  const sensor_type_interface__msg__MobileSensorArray__Sequence * input,
  sensor_type_interface__msg__MobileSensorArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_TYPE_INTERFACE__MSG__DETAIL__MOBILE_SENSOR_ARRAY__FUNCTIONS_H_
