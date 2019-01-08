#ifndef _FUNC_H_
#define _FUNC_H_

#include <iostream>

template <class T = double>
void dummy() {
  T t{};
  std::cout << t << ": dummy\n";
}

#endif /* _FUNC_H_ */
