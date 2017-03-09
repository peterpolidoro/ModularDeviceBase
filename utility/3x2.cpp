// ----------------------------------------------------------------------------
// 3x2.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "3x2.h"


#if defined(__MK20DX256__)

namespace modular_device_base
{
namespace constants
{
CONSTANT_STRING(form_factor,"3x2");

CONSTANT_STRING(processor_hardware_name,"Teensy");
const modular_server::HardwareInfo processor_hardware_info =
  {
    .name_ptr=&processor_hardware_name,
    .part_number=0,
    .version_major=3,
    .version_minor=2,
  };

CONSTANT_STRING(hardware_name,"modular_device_base");
const modular_server::HardwareInfo hardware_info =
  {
    .name_ptr=&hardware_name,
    .part_number=1001,
    .version_major=1,
    .version_minor=1,
  };

HardwareSerial * serial_stream_ptrs[SERIAL_STREAM_COUNT] =
  {
    &Serial1,
    &Serial3,
  };

// Interrupts
CONSTANT_STRING(bnc_a_interrupt_name,"bnc_a");
const size_t bnc_a_pin = 33;

CONSTANT_STRING(bnc_b_interrupt_name,"bnc_b");
const size_t bnc_b_pin = 32;

// Units

// Properties

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
