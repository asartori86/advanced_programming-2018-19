#ifndef __ap_helper
#define __ap_helper

#include <iostream>
#include <animal.h>

/**
 * inline functions must be in header files. Do you guess why?
 */
inline void newline() noexcept {
  std::cout << std::endl;
}

/**
 * print Animal's details. It calls Animal::info() and Animal::speak()
 */
void print_animal(const Animal& a) noexcept;

#endif
