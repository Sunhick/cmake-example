/**
 * ui/gui.h
 *
 * Copyright (c) 2017 Sunil
 */
#pragma once

#include <string>
#include <iostream>

namespace neon {

class Gui {
 private:
  std::string container;
  std::string id;

 public:
  std::string GetContainerId();
};  // namespace Gui

}  // namespace neon
