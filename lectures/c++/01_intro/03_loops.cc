#include <iostream>

void new_line() {
  std::cout << std::endl;
}

int main() {
  for (int i = 0; i < 10; ++i) {
    std::cout << i << " ";  // if the action is just one line, {} can be omitted
  }

  new_line();
  // std::cout << i << '\n';	// error, i is out of scope

  int i{};

  while (i < 10)
    std::cout << i++ << " ";

  new_line();

  std::cout << i << "\n";

  do {
    std::cout << "inside do \n";
  } while (i < 2);  // note ; at the end
}
