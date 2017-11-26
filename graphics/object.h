#pragma once

#include <string>

namespace neon {

// define a generic graphics object
class object {
 public:
  virtual std::string GetUid() = 0;
  virtual void Draw() = 0;
  virtual void Resize() = 0;
  
 private:
  std::string uid;
}; // class object

} // namespcae neon
