#include "graphics/core/core.h"

#include <iostream>

namespace neon {
namespace core {

namespace {

void Helper() {
  std::cout << "core helper called" << "\n";
}

} // namespace 

void Context::Print() {
  Helper();
  contextId = "Context.graphics.0.445de";
  std::cout << "context id: " << contextId << std::endl;
}

} // namespace core
} // namespace neon










