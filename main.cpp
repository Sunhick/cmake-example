#include <iostream>
#include <config.h>

#include "console.h"
#include "ui/gui.h"
#include "graphics/Line.h"
#include "graphics/object.h"

using namespace std;

int main(int argc, char **argv) {
  cout << "Welcome to cmake tutorials!" << "\n";
  cout << "Author: " << AUTHOR << "\n";

  neon::Console c("Radon");
  c.print_name();

  neon::Gui ui;
  cout << "Container: " << ui.getContainerId() << endl;

  neon::Line line;
  line.draw();
  line.resize();
  
  return 0;
}
