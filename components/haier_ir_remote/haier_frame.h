#pragma once

#include "esphome/components/climate/climate.h"

namespace esphome {
namespace haier_ir_remote {

struct HaierFrame {

  bool power{false};

  climate::ClimateMode mode{climate::CLIMATE_MODE_OFF};

  climate::ClimateFanMode fan_mode{
      climate::CLIMATE_FAN_AUTO};

  climate::ClimateSwingMode swing_mode{
      climate::CLIMATE_SWING_OFF};

  float target_temperature{24.0f};

};

}  // namespace haier_ir_remote
}  // namespace esphome
