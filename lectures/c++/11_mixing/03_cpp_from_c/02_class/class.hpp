#ifndef _CLASS_H_
#define _CLASS_H_

#include <iostream>

class Foo {
  int a;

 public:
  Foo(int b) : a{b} {}
  void print();
  int& get_a() { return a; }
};

#endif /* _CLASS_H_ */
