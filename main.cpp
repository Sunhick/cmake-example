#include <iostream>
#include <config.h>

#include "console.h"
#include "ui/gui.h"

#ifdef USE_GRAPHICS
#include "graphics/Line.h"
#include "graphics/object.h"
#endif

using namespace std;

#define UNUSED __attribute__((unused))

int main(UNUSED int argc, UNUSED char **argv) {
  cout << "Welcome to cmake tutorials!" << "\n";
  cout << "Author: " << AUTHOR << "\n";

  neon::Console c("Radon");
  c.print_name();

  neon::Gui ui;
  cout << "Container: " << ui.getContainerId() << endl;

#ifdef USE_GRAPHICS
  neon::Line line;
  line.draw();
  line.resize();
#endif

#if defined(HAS_LOG)
  cout << "OS support log(...) function." << "\n";
#else
  cout << "OS doesn't support log." << "\n";
#endif
  
  return 0;
}
