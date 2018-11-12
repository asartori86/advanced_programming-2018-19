#include <iostream>
#include <dog.h>
#include <snake.h>
#include <helper_functions.h>

int main() {
  try {
    Python s;
    s.info();
    s.speak();

    newline();

    // Animal* p = new DangerousSnake{1, 2.3};
    Animal* p = new Anaconda{1, 2.3};

    std::cout << "through pointer\n";
    p->info();
    p->speak();

    delete p;

    newline();

    print_animal(s);

    return 0;
  } catch (std::runtime_error& e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}
