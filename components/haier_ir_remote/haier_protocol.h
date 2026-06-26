#pragma once

#include <array>
#include <cstdint>

namespace esphome {
namespace haier_ir_remote {

class HaierProtocol {
 public:
  static constexpr uint8_t FRAME_SIZE = 13;

  using Frame = std::array<uint8_t, FRAME_SIZE>;

  HaierProtocol();

  Frame build_frame();

 private:
  Frame frame_;
};

}  // namespace haier_ir_remote
}  // namespace esphome
