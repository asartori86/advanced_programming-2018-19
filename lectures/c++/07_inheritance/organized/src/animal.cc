#include <animal.h>
#include <ap_error.h>

Animal::Animal() : Animal{0, 0} {}

Animal::Animal(const unsigned int a, const double w) : age{a}, weight{w} {
  if (weight < 0)
    AP_error("invalid weight:", w);
}

// virtual Animal::info() const noexcept{   would be error: do not repeat
// virtual
void Animal::info() const noexcept {
  std::cout << "age:\t" << age << '\n' << "weight:\t" << weight << '\n';
}
