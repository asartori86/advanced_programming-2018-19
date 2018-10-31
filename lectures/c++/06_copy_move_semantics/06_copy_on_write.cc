#include <algorithm>
#include <iostream>
#include <memory>

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

  const num& operator[](const std::size_t& i) const noexcept {
    return *(elem.get() + i);
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
      std::cout << "deep\n";
      const num* p = elem.get();
      elem = std::shared_ptr<num>{new num[_size], deleter<num>{}};
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

  v1[0] = 99;

  std::cout << "\nv1[0] = 99;\n";
  std::cout << "v1 = " << v1;
  std::cout << "v2 = " << v2;

  std::cout << "\nv2.deep_copy();\n";
  std::cout << "v2.deep_copy();\n";
  std::cout << "v1[6] = 77;\n";

  v2.deep_copy();
  v2.deep_copy();
  v1[6] = 77;

  std::cout << "v1 = " << v1;
  std::cout << "v2 = " << v2;

  return 0;
}
