#include "graphics/Line.h"

#include <iostream>

namespace neon {

std::string Line::GetUid() {
  return "Line";
}

void Line::Draw() {
  auto f = []() {
    std::cout << "calculating where to draw line..." << "\n";
  };

  f();
  std::cout << "Drawing line..." << std::endl;
  ctx.Print();
  std::cout << "Line drawn on the context" << "\n";
}

void Line::Resize() {
  std::cout << "Resizing line..." << "\n";
}

} // namespace neon
