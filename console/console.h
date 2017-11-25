#pragma once

#include <string>

namespace neon {

class Console {
 private:
  std::string name;
  std::string guid;

 public:
  Console(const std::string& n);
  void print_name();
  void print_guid();
}; // class neon

} // namespace neon
