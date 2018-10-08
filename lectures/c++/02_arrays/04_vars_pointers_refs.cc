#include <iostream>

int main() {
  double d{9.9};
  double& ref{d};
  double* ptr{&d};
  std::cout << "content of\t   d: " << d << std::endl;
  std::cout << "content of\t ref: " << ref << std::endl;
  std::cout << "content of\t ptr: " << ptr << std::endl << std::endl;

  std::cout << "address of\t   d: " << &d << std::endl;
  std::cout << "address of\t ref: " << &ref << std::endl;
  std::cout << "address of\t ptr: " << &ptr << std::endl << std::endl;

  // the content of variable d can be changed through either ref or
  // ptr as follows
  ref = 7.7;
  std::cout << "ref = 7.7;\n";
  std::cout << "content of\t   d: " << d << std::endl << std::endl;
  *ptr = 5.5;
  std::cout << "*ptr = 5.5;\n";
  std::cout << "content of\t   d: " << d << std::endl << std::endl;

  // but not from another variable of the same type
  double copy{d};
  std::cout << "content of\tcopy: " << copy << std::endl << std::endl;

  copy = 0;
  std::cout << "copy = 0;\n";
  std::cout << "content of\tcopy: " << copy << std::endl;
  std::cout << "content of\t   d: " << d << std::endl;
}
