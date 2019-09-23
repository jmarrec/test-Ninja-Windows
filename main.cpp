#include <iostream>
#include <sstream>

// #include "afile.hpp"

// Works fine
// #include <src/folder/afile.hpp>

// Doesn't work, over MAX_PATH
// #include <src/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/folder/afile.hpp>


#include "\\?\C:\Users\julien\Software\test-Ninja-Windows\build\src\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\folder\afile.hpp"

int main(int argc, char * argv[]) {

  std::cout << "Hello World!" << std::endl;

  freeFunction();

  return 0;
}
