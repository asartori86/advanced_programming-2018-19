#include <fstream>
#include <iostream>
int main() {
  int a = 7;
  double d = 9.9;
  {
    std::ofstream f{"a_file.txt"};

    f << "Hello World!\n"
      << "a = " << a << "\n"
      << "d = " << d << std::endl;

    f << "Another line!\n";
  }
  return 0;
}
