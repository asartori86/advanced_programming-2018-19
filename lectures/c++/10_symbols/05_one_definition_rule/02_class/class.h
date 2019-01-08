#ifndef __class__
#define __class__

#include <iostream>

struct A {
  int a;
  A();
};

A::A() {
  std::cout << "A ctor\n";
}

#endif
