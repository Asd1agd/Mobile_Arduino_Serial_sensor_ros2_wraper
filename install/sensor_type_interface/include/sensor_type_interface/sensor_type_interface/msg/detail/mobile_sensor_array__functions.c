// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_type_interface:msg/MobileSensorArray.idl
// generated code does not contain a copyright notice
#include "sensor_type_interface/msg/detail/mobile_sensor_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sensor_type_interface__msg__MobileSensorArray__init(sensor_type_interface__msg__MobileSensorArray * msg)
{
  if (!msg) {
    return false;
  }
  // accelerometer_sensor_data
  // magnetic_field_sensor_data
  // gyroscope_sensor_data
  // light_sensor_data
  // pressure_sensor_data
  // proximity_sensor_data
  // gravity_sensor_data
  // relative_humidity_sensor_data
  // temperature_sensor_data
  // heart_beat_sensor_data
  // orientation_sensor_data
  // line_sensor_sensor_data
  // position_sensor_data
  // parameter_sensor_data
  return true;
}

void
sensor_type_interface__msg__MobileSensorArray__fini(sensor_type_interface__msg__MobileSensorArray * msg)
{
  if (!msg) {
    return;
  }
  // accelerometer_sensor_data
  // magnetic_field_sensor_data
  // gyroscope_sensor_data
  // light_sensor_data
  // pressure_sensor_data
  // proximity_sensor_data
  // gravity_sensor_data
  // relative_humidity_sensor_data
  // temperature_sensor_data
  // heart_beat_sensor_data
  // orientation_sensor_data
  // line_sensor_sensor_data
  // position_sensor_data
  // parameter_sensor_data
}

bool
sensor_type_interface__msg__MobileSensorArray__are_equal(const sensor_type_interface__msg__MobileSensorArray * lhs, const sensor_type_interface__msg__MobileSensorArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accelerometer_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->accelerometer_sensor_data[i] != rhs->accelerometer_sensor_data[i]) {
      return false;
    }
  }
  // magnetic_field_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->magnetic_field_sensor_data[i] != rhs->magnetic_field_sensor_data[i]) {
      return false;
    }
  }
  // gyroscope_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->gyroscope_sensor_data[i] != rhs->gyroscope_sensor_data[i]) {
      return false;
    }
  }
  // light_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->light_sensor_data[i] != rhs->light_sensor_data[i]) {
      return false;
    }
  }
  // pressure_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->pressure_sensor_data[i] != rhs->pressure_sensor_data[i]) {
      return false;
    }
  }
  // proximity_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->proximity_sensor_data[i] != rhs->proximity_sensor_data[i]) {
      return false;
    }
  }
  // gravity_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->gravity_sensor_data[i] != rhs->gravity_sensor_data[i]) {
      return false;
    }
  }
  // relative_humidity_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->relative_humidity_sensor_data[i] != rhs->relative_humidity_sensor_data[i]) {
      return false;
    }
  }
  // temperature_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->temperature_sensor_data[i] != rhs->temperature_sensor_data[i]) {
      return false;
    }
  }
  // heart_beat_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->heart_beat_sensor_data[i] != rhs->heart_beat_sensor_data[i]) {
      return false;
    }
  }
  // orientation_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->orientation_sensor_data[i] != rhs->orientation_sensor_data[i]) {
      return false;
    }
  }
  // line_sensor_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->line_sensor_sensor_data[i] != rhs->line_sensor_sensor_data[i]) {
      return false;
    }
  }
  // position_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->position_sensor_data[i] != rhs->position_sensor_data[i]) {
      return false;
    }
  }
  // parameter_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->parameter_sensor_data[i] != rhs->parameter_sensor_data[i]) {
      return false;
    }
  }
  return true;
}

bool
sensor_type_interface__msg__MobileSensorArray__copy(
  const sensor_type_interface__msg__MobileSensorArray * input,
  sensor_type_interface__msg__MobileSensorArray * output)
{
  if (!input || !output) {
    return false;
  }
  // accelerometer_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->accelerometer_sensor_data[i] = input->accelerometer_sensor_data[i];
  }
  // magnetic_field_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->magnetic_field_sensor_data[i] = input->magnetic_field_sensor_data[i];
  }
  // gyroscope_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->gyroscope_sensor_data[i] = input->gyroscope_sensor_data[i];
  }
  // light_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->light_sensor_data[i] = input->light_sensor_data[i];
  }
  // pressure_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->pressure_sensor_data[i] = input->pressure_sensor_data[i];
  }
  // proximity_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->proximity_sensor_data[i] = input->proximity_sensor_data[i];
  }
  // gravity_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->gravity_sensor_data[i] = input->gravity_sensor_data[i];
  }
  // relative_humidity_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->relative_humidity_sensor_data[i] = input->relative_humidity_sensor_data[i];
  }
  // temperature_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->temperature_sensor_data[i] = input->temperature_sensor_data[i];
  }
  // heart_beat_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->heart_beat_sensor_data[i] = input->heart_beat_sensor_data[i];
  }
  // orientation_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->orientation_sensor_data[i] = input->orientation_sensor_data[i];
  }
  // line_sensor_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->line_sensor_sensor_data[i] = input->line_sensor_sensor_data[i];
  }
  // position_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->position_sensor_data[i] = input->position_sensor_data[i];
  }
  // parameter_sensor_data
  for (size_t i = 0; i < 5; ++i) {
    output->parameter_sensor_data[i] = input->parameter_sensor_data[i];
  }
  return true;
}

sensor_type_interface__msg__MobileSensorArray *
sensor_type_interface__msg__MobileSensorArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_type_interface__msg__MobileSensorArray * msg = (sensor_type_interface__msg__MobileSensorArray *)allocator.allocate(sizeof(sensor_type_interface__msg__MobileSensorArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_type_interface__msg__MobileSensorArray));
  bool success = sensor_type_interface__msg__MobileSensorArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_type_interface__msg__MobileSensorArray__destroy(sensor_type_interface__msg__MobileSensorArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_type_interface__msg__MobileSensorArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_type_interface__msg__MobileSensorArray__Sequence__init(sensor_type_interface__msg__MobileSensorArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_type_interface__msg__MobileSensorArray * data = NULL;

  if (size) {
    data = (sensor_type_interface__msg__MobileSensorArray *)allocator.zero_allocate(size, sizeof(sensor_type_interface__msg__MobileSensorArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_type_interface__msg__MobileSensorArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_type_interface__msg__MobileSensorArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sensor_type_interface__msg__MobileSensorArray__Sequence__fini(sensor_type_interface__msg__MobileSensorArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_type_interface__msg__MobileSensorArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sensor_type_interface__msg__MobileSensorArray__Sequence *
sensor_type_interface__msg__MobileSensorArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_type_interface__msg__MobileSensorArray__Sequence * array = (sensor_type_interface__msg__MobileSensorArray__Sequence *)allocator.allocate(sizeof(sensor_type_interface__msg__MobileSensorArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_type_interface__msg__MobileSensorArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_type_interface__msg__MobileSensorArray__Sequence__destroy(sensor_type_interface__msg__MobileSensorArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_type_interface__msg__MobileSensorArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_type_interface__msg__MobileSensorArray__Sequence__are_equal(const sensor_type_interface__msg__MobileSensorArray__Sequence * lhs, const sensor_type_interface__msg__MobileSensorArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_type_interface__msg__MobileSensorArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_type_interface__msg__MobileSensorArray__Sequence__copy(
  const sensor_type_interface__msg__MobileSensorArray__Sequence * input,
  sensor_type_interface__msg__MobileSensorArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_type_interface__msg__MobileSensorArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_type_interface__msg__MobileSensorArray * data =
      (sensor_type_interface__msg__MobileSensorArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_type_interface__msg__MobileSensorArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_type_interface__msg__MobileSensorArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_type_interface__msg__MobileSensorArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
