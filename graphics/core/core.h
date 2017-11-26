#pragma once

#include <string>

namespace neon {
namespace core {

class Context {
 public:
  void Print();

 private:
  std::string contextId;
}; // class Context

} // namespace core
} // namespcae neon
