#pragma once

#include <string>

using namespace std;

namespace neon {

// Line graphics object
class Line {
 private:
  std::string uid;
  
 public:
  std::string getUid();
  void draw();
  void resize();
}; // class object

} // namespcae neon
