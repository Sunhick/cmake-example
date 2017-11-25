#include "console.h"

#include <iostream>

using namespace std;

namespace neon {

Console::Console(const std::string& n) : name(n) { }

void Console::print_name() {
  cout << "name: " << name << "\n";
}

void Console::print_guid() {
  cout << "Guid" << "\n";
}

} // namespace neon
