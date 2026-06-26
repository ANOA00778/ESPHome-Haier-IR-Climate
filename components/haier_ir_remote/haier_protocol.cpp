#include "haier_protocol.h"

namespace esphome {
namespace haier_ir_remote {

HaierProtocol::HaierProtocol() {
  frame_ = {
      0xA6,
      0x82,
      0x0F,
      0x00,
      0x47,
      0xA0,
      0x00,
      0x25,
      0x2D,
      0x00,
      0x00,
      0x00,
      0x04};
}

HaierProtocol::Frame HaierProtocol::build_frame() {
  return frame_;
}

}  // namespace haier_ir_remote
}  // namespace esphome
