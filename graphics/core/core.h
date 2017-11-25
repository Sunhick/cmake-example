#pragma once

#include <string>

namespace neon {
namespace core {

class Context {
 private:
  std::string contextId;

 public:
  void print();
}; // class Context

} // namespace core
} // namespcae neon
