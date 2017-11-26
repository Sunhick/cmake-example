#pragma once

#include <string>

#include "graphics/core/core.h"

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
