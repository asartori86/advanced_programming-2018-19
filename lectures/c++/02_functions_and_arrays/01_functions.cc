#include <iostream>

// function overloading
int dwim(const int a, const int b);
double dwim(const double a, const double b);
float dwim(const float a, const float b);

int main() {
  int a{5}, b{7};
  double c{3.332}, d{7.7};
  float e{23.4}, f{3.34e2};

  std::cout << dwim(a, b) << '\n'
            << dwim(c, d) << '\n'
            << dwim(e, f) << std::endl;
  return 0;
}

int dwim(const int a, const int b) {
  return a + b;
}

double dwim(const double a, const double b) {
  return a + b;
}

float dwim(const float a, const float b) {
  return a + b;
}
