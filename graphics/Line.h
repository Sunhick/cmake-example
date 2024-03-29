/**
 * graphics/Line.h
 *
 * Copyright (c) 2017 Sunil
 */
#pragma once

#include <string>

#include "graphics/core/core.h"

namespace neon {

/**
 * Line graphics object
 */
class Line {
 public:
  std::string GetUid();
  void Draw();
  void Resize();

 private:
  std::string uid;
  core::Context ctx;
};  // class object

}  // namespace neon
