//
//  Circle.cpp
//  neon
//
//  Created by Sunil on 11/25/17.
//

#include "graphics/Circle.h"

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

}  // neon
