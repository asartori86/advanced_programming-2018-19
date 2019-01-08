#ifndef __class__
#define __class__

#include <iostream>

template <class T = double>
struct A {
  T a;
  A();
};

template <class T>
A<T>::A() {
  std::cout << "A ctor\n";
}

#endif
