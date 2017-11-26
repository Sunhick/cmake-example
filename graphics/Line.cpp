#include "graphics/Line.h"

#include <iostream>

namespace neon {

std::string Line::getUid() {
  return "Line";
}

void Line::draw() {
  auto f = []() {
    cout << "calculating where to draw line..." << "\n";
  };

  f();
  std::cout << "Drawing line..." << std::endl;
  ctx.print();
  std::cout << "Line drawn on the context" << "\n";
}

void Line::resize() {
  std::cout << "Resizing line..." << "\n";
}


} // namespace neon
