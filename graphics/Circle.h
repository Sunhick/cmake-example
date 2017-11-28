/**
 * graphics/Circle.cpp
 *
 * Copyright (c) 2017 Sunil
 */
#pragma once

#include <string>

#include "graphics/object.h"

namespace neon {

class Circle : public object {
 public:
  Circle();
  virtual ~Circle();

  std::string GetUid() override;
  void Draw() override;
  void Resize() override;
};  // class Circle

}  // namespace neon
