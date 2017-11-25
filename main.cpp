#include <iostream>
#include <config.h>

#include "console.h"
#include "ui/gui.h"

#ifdef USE_GRAPHICS
#include "graphics/Line.h"
#include "graphics/object.h"
#endif

using namespace std;

int main(int argc, char **argv) {
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
  
  return 0;
}
