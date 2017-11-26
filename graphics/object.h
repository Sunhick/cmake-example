#pragma once

#include <string>

namespace neon {

// define a generic graphics object
class object {
 public:
  virtual std::string GetUid() = 0;
  virtual void draw() = 0;
  virtual void resize() = 0;
  
 private:
  std::string uid;
}; // class object

} // namespcae neon
