/**
 * graphics/Circle.cpp
 *
 * Copyright (c) 2017 Sunil
 */
#include "graphics/Circle.h"

#include <iostream>

namespace neon {

std::string Circle::GetUid() {
  return "circle";
}

void Circle::Draw() {
  std::cout << "Drawing circle..." << "\n";
}

void Circle::Resize() {
  std::cout << "Resizing the circle..." << "\n";
}

}  // namespace neon
