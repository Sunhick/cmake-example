#include "graphics/core/core.h"

#include <iostream>

namespace neon {
namespace core {

namespace {

void helper() {
  std::cout << "core helper called" << "\n";
}

} // namespace 

void Context::print() {
  helper();
  contextId = "Context.graphics.0.445de";
  std::cout << "context id: " << contextId << std::endl;
}

} // namespace core
} // namespace neon










