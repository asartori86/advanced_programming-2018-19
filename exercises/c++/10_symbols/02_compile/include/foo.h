#include "utility.h"

struct Foo{
  static double f;
  std::string bar;
  Foo() = delete;
  Foo(const std::string& s) :: bar[to_upper{s}] ();
};
