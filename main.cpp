#include <iostream>
#include <config.h>

#include "console.h"

using namespace std;

int main(int argc, char **argv) {
  cout << "Welcome to cmake tutorials!" << "\n";
  cout << "Author: " << AUTHOR << "\n";

  neon::Console c("Radon");
  c.print_name();
  
  return 0;
}
