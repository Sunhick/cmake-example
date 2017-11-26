#include <iostream>
#include <config.h>

#include "console/console.h"
#include "ui/gui.h"

#ifdef USE_GRAPHICS
#include "graphics/Line.h"
#include "graphics/object.h"
#endif

#define UNUSED __attribute__((unused))

int main(UNUSED int argc, UNUSED char **argv) {
  std::cout << "Welcome to cmake tutorials!" << "\n";
  std::cout << "Author: " << AUTHOR << "\n";

  neon::Console c("Radon");
  c.print_name();

  neon::Gui ui;
  std::cout << "Container: " << ui.getContainerId() << std::endl;

#ifdef USE_GRAPHICS
  neon::Line line;
  line.draw();
  line.resize();
#endif

#if defined(HAS_LOG)
  std::cout << "OS support log(...) function." << "\n";
#else
  std::cout << "OS doesn't support log." << "\n";
#endif
  
  return 0;
}
