//
//  Circle.hpp
//  neon
//
//  Created by Sunil on 11/25/17.
//

#pragma once

#include "graphics/object.h"

namespace neon {

class Circle : public object {
 public:
  Circle();
  virtual ~Circle();

  std::string GetUid() override;
  void Draw() override;
  void Resize() override;
}; // Circle

}  // neon
