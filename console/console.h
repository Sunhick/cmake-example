/**
 * console/console.h
 *
 * Copyright (c) 2017 Sunil
 */
#pragma once

#include <string>

namespace neon {

class Console {
 public:
  explicit Console(const std::string& n);
  void PrintName();
  void PrintGuid();

 private:
  std::string name;
  std::string guid;
};  // class neon

}  // namespace neon
