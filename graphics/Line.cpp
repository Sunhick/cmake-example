#include "graphics/Line.h"

#include <iostream>

namespace neon {

/**
 * Get uid for the line object
 */
std::string Line::GetUid() {
  return "Line";
}

/**
 * Draws the line
 */
void Line::Draw() {
  auto f = []() {
    std::cout << "calculating where to draw line..." << "\n";
    throw "Bad value";
  };

  try {
    f();
  } catch (...) {
    std::cerr << "Error occured \n";
  }

  std::cout << "Drawing line..." << std::endl;
  ctx.Print();
  std::cout << "Line drawn on the context" << "\n";
}

/**
 * Resizes the line
 */
void Line::Resize() {
  std::cout << "Resizing line..." << "\n";
}



} // namespace neon
