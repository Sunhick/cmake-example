#pragma once

#include <string>

#include "core/core.h"

using namespace std;

namespace neon {

// Line graphics object
class Line {
 private:
  std::string uid;
  core::Context ctx;
  
 public:
  std::string getUid();
  void draw();
  void resize();
}; // class object

} // namespcae neon
