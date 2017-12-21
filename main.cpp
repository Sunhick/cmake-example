/**
 * main.cpp
 *
 * Copyright (c) 2017 Sunil
 */
#include "config.h"

#include <iostream>

#include "console/console.h"
#include "ui/gui.h"

#ifdef USE_GRAPHICS
#include "graphics/Line.h"
#include "graphics/object.h"
#endif

#include <profile.h>

#define UNUSED __attribute__((unused))

using namespace bazel101::profile;

int main(UNUSED int argc, UNUSED char **argv) {
  std::cout << "Welcome to cmake tutorials!"
            << "\n";
  std::cout << "Author: " << AUTHOR << "\n";

  neon::Console c("Radon");
  c.PrintName();

  neon::Gui ui;
  std::cout << "Container: " << ui.GetContainerId() << std::endl;

#ifdef USE_GRAPHICS
  neon::Line line;
  line.Draw();
  line.Resize();
#endif

#if defined(HAS_LOG)
  std::cout << "OS support log(...) function."
            << "\n";
#else
  std::cout << "OS doesn't support log."
            << "\n";
#endif

  Profile f;
  f.describe();
  return 0;
}
