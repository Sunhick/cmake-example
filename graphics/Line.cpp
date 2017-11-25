#include "Line.h"

#include <iostream>

using namespace std;

namespace neon {

std::string Line::getUid() {
  return "Line";
}

void Line::draw() {
  auto f = []() {
    cout << "calculating where to draw line..." << "\n";
  };

  f();
  cout << "Drawing line..." << endl;
  ctx.print();
  cout << "Line drawn on the context" << "\n";
}

void Line::resize() {
  cout << "Resizing line..." << "\n";
}


} // namespace neon
