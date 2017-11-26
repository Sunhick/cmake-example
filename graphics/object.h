#pragma once

#include <string>

namespace neon {

// define a generic graphics object
class object {
 public:
  std::string getUid();
  void draw();
  void resize();
  
 private:
  std::string uid;
}; // class object

} // namespcae neon
