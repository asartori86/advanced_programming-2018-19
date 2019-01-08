#include "constants.h"
#include <iostream>

int circle_counter{0};

double area_circle(const double r) {
  ++circle_counter;
  return pi * r * r;
}
