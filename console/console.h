#pragma once

#include <string>

namespace neon {

class Console {
 public:
  Console(const std::string& n);
  void PrintName();
  void PrintGuid();

 private:
  std::string name;
  std::string guid;
}; // class neon

} // namespace neon
