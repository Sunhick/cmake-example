#include "console/console.h"

#include <iostream>

namespace neon {

Console::Console(const std::string& n) : name(n) { }

void Console::print_name() {
  std::cout << "name: " << name << "\n";
}

void Console::print_guid() {
  std::cout << "Guid" << "\n";
}

} // namespace neon
