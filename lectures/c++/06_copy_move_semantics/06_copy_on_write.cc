#include <algorithm>
#include <iostream>
#include <memory>

// functional object
// In c++11 std::shared_ptr does not support <num[]>
// so we need to define a proper deallocator
// this has been fixed since c++14
template <typename num>
struct deleter {
  void operator()(num* p) { delete[] p; }
};

template <typename num>
class Vector {
  std::size_t _size;
  std::shared_ptr<num> elem;

 public:
  explicit Vector(const std::size_t length)
      : _size{length}, elem{new num[_size]{}, deleter<num>{}} {}

  // same constructor using lambda function
  //
  // explicit Vector(const std::size_t length)
  //     : _size{length}, elem{new num[_size], [](num* pointer) {
  //                             delete[] pointer;
  //                           }} {}

  // default copy semantic is fine
  Vector(const Vector&) = default;
  Vector& operator=(const Vector&) = default;

  // move semantic is fine as well
  Vector(Vector&&) = default;
  Vector& operator=(Vector&&) = default;

  const num& operator[](const std::size_t& i) const noexcept {
    return *(elem.get() + i);  // operator[] has been introduced in c++17
  }
  num& operator[](const std::size_t& i) noexcept { return *(elem.get() + i); }

  std::size_t size() const noexcept { return _size; }

  // range-for
  const num* begin() const noexcept { return elem.get(); }
  num* begin() noexcept { return elem.get(); }

  const num* end() const noexcept { return elem.get() + _size; }
  num* end() noexcept { return elem.get() + _size; }

  void deep_copy() {
    if (elem.use_count() > 1) {
      const num* p = elem.get();
      elem.reset(new num[_size],
                 deleter<num>{});  // the previous array will not be deallocated
                                   // because use_count was > 1
      std::copy(p, p + _size, elem.get());
    }
  }
};

template <typename num>
std::ostream& operator<<(std::ostream& os, const Vector<num>& v) {
  for (const auto& x : v)
    os << x << " ";
  os << std::endl;
  return os;
}

int main() {
  Vector<double> v1{7};
  Vector<double> v2{v1};

  std::cout << "v1 = " << v1;
  std::cout << "v2 = " << v2;

  v2[0] = 99;

  std::cout << "\nv2[0] = 99;\n";
  std::cout << "v1 = " << v1;
  std::cout << "v2 = " << v2;

  std::cout << "\nv2.deep_copy();\n";
  std::cout << "v2.deep_copy();\n";
  std::cout << "v2[6] = 77;\n";

  // before actually writing on v2 we call a deep_copy
  v2.deep_copy();
  v2.deep_copy();
  v2[6] = 77;

  std::cout << "v1 = " << v1;
  std::cout << "v2 = " << v2;

  return 0;
}
