/**
 * graphics/core/core.h
 *
 * Copyright (c) 2017 Sunil
 */
#pragma once

#include <string>

namespace neon {
namespace core {

class Context {
 public:
  void Print();

 private:
  std::string contextId;
};  // class Context

}  // namespace core
}  // namespace neon
