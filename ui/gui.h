#pragma once

#include <string>
#include <iostream>

namespace neon {

class Gui {
 private:
  std::string container;
  std::string id;

 public:
  std::string getContainerId();
}; // namespace Gui

} // namespace neon
