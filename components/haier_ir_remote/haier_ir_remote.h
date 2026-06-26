#pragma once

#include "esphome/core/component.h"
#include "esphome/components/climate/climate.h"
#include "haier_protocol.h"

namespace esphome {
namespace haier_ir_remote {

class HaierIRRemoteClimate : public climate::Climate,
                             public Component {
 public:
  void setup() override;
  void loop() override;

 protected:
  climate::ClimateTraits traits() override;
  void control(const climate::ClimateCall &call) override;

 private:
  HaierProtocol protocol_;
};

}  // namespace haier_ir_remote
}  // namespace esphome
