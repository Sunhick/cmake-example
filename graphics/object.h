#pragma once

#include <string>

namespace neon {

// define a generic graphics object
class object {
 private:
  std::string uid;
  
 public:
  std::string getUid();
  void draw();
  void resize();
}; // class object

} // namespcae neon
