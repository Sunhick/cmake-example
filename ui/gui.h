#pragma once

#include <string>
#include <iostream>

using namespace std;

namespace neon {

class Gui {
 private:
  std::string container;
  std::string id;

 public:
  std::string getContainerId();
}; // namespace Gui

} // namespace neon
