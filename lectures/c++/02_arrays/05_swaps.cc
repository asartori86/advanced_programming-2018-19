#include <iostream>
#include <utility>  //std::swap

void buggy_swap(int a, int b);
void c_swap(int* a, int* b);
void cxx_swap(int& a, int& b);

template <typename T>
void templ_swap(T& a, T& b);

int main() {
  int a = 3;
  int b = {7};
  buggy_swap(a, b);
  std::cout << "buggy:\texpected 7 3 --> " << a << " " << b << "\n";

  a = 3;
  b = 7;
  c_swap(&a, &b);
  std::cout << "    c:\texpected 7 3 --> " << a << " " << b << "\n";

  a = 3;
  b = 7;
  cxx_swap(a, b);
  std::cout << "  cxx:\texpected 7 3 --> " << a << " " << b << "\n";

  a = 3;
  b = 7;
  templ_swap(a, b);
  std::cout << "templ:\texpected 7 3 --> " << a << " " << b << "\n";

  a = 3;
  b = 7;
  std::swap(a, b);
  std::cout << "  stl:\texpected 7 3 --> " << a << " " << b << "\n";
}

void buggy_swap(int a, int b) {
  int tmp{b};
  b = a;
  a = tmp;
}

void c_swap(int* a, int* b) {
  int tmp{*b};
  *b = *a;
  *a = tmp;
}

void cxx_swap(int& a, int& b) {
  int tmp{b};
  b = a;
  a = tmp;
}

template <typename T>
void templ_swap(T& a, T& b) {
  T tmp{b};
  b = a;
  a = tmp;
}
