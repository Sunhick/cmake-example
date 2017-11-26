#include "console/console.h"

#include <iostream>

namespace neon {

Console::Console(const std::string& n) : name(n) { }

void Console::PrintName() {
  std::cout << "name: " << name << "\n";
}

void Console::PrintGuid() {
  std::cout << "Guid" << "\n";
}

} // namespace neon
