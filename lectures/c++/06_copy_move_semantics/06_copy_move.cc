#include <algorithm>  // std::copy
#include <iostream>
#include <memory>

#include "ap_error.h"

template <typename num>
class Vector {
  std::size_t _size;
  std::unique_ptr<num[]> elem;

 public:
  // custom ctor
  explicit Vector(const std::size_t length)
      : _size{length}, elem{new num[length]{}} {
    std::cout << "custom ctor\n";
  }

  // Vector(const std::initializer_list<num> args)
  //     : _size{args.size()}, elem{new num[_size]} {
  //   std::cout << "list ctor\n";
  //   std::copy(args.begin(), args.end(), begin());
  // }

  // default ctor
  Vector() { std::cout << "default ctor\n"; }  // _size uninitialized
  // Vector() : _size{}, elem{} { std::cout << "default ctor\n"; } // this could
  // be better Vector() = default;

  ~Vector() noexcept = default;

  /////////////////////////
  // copy semantics

  // copy ctor -- deep copy
  Vector(const Vector& v);

  // copy assignment -- deep copy
  Vector& operator=(const Vector& v);
  // end of copy semantics
  /////////////////////////

  /////////////////////////
  // move semantics

  // move ctor
  Vector(Vector&& v) noexcept
      : _size{std::move(v._size)}, elem{std::move(v.elem)} {
    std::cout << "move ctor\n";
  }

  // Vector(Vector&& v) noexcept = default; // works perfectly

  // move assignment
  Vector& operator=(Vector&& v) noexcept {
    std::cout << "move assignment\n";
    _size = std::move(v._size);
    elem = std::move(v.elem);
    return *this;
  }

  // Vector& operator=(Vector&& v) noexcept  = default; // is perfectly fine

  // end move semantics
  /////////////////////////

  const num& operator[](const std::size_t& i) const noexcept { return elem[i]; }
  num& operator[](const std::size_t& i) noexcept { return elem[i]; }

  std::size_t size() const noexcept { return _size; }

  // range-for
  const num* begin() const noexcept { return &elem[0]; }
  num* begin() noexcept { return &elem[0]; }

  const num* end() const noexcept { return &elem[_size]; }
  num* end() noexcept { return &elem[_size]; }
};

// copy ctor
template <typename num>
Vector<num>::Vector(const Vector& v) : _size{v._size}, elem{new num[_size]} {
  std::cout << "copy ctor\n";
  std::copy(v.begin(), v.end(), begin());
}

// copy assignment
template <typename num>
Vector<num>& Vector<num>::operator=(const Vector& v) {
  std::cout << "copy assignment ( ";

  // we could decide that this operation is allowed if and only if
  // _size == v._size
  //
  // AP_ASSERT_EQ(_size, v._size) << "Vector lenght mismatch\n";

  elem.reset();              // first of all clean my memory
  auto tmp = v;              // then use copy ctor
  (*this) = std::move(tmp);  // finally move assignment

  // or we do everything by hand..
  // and we can do not reset and call new again if the sizes are suitable

  std::cout << " )\n";
  return *this;

  // is this approach consistent with self-assignment vx=vx?
}

template <typename num>
// why we return by value?
Vector<num> operator+(const Vector<num>& lhs, const Vector<num>& rhs) {
  const auto size = lhs.size();

  AP_ASSERT_EQ(size, rhs.size()) << "Vector lenght mismatch!\n";

  Vector<num> res(size);
  for (std::size_t i = 0; i < size; ++i)
    res[i] = lhs[i] + rhs[i];

  return res;
}

template <typename num>
std::ostream& operator<<(std::ostream& os, const Vector<num>& v) {
  for (const auto& x : v)
    os << x << " ";
  os << std::endl;
  return os;
}

int main() {
  try {
    std::cout << "Vector<int> v0; calls\n";
    Vector<int> v0;
    std::cout << v0.size() << "\n";
    std::cout << "Vector<int> v00{}; calls\n";
    Vector<int> v00{};
    std::cout << v00.size() << "\n";

    std::cout << "\nVector<double> v1{5}; calls\n";
    Vector<double> v1{5};

    std::cout << "\nVector<double> v2 = v1; calls\n";
    Vector<double> v2 = v1;
    std::cout << "\nv2 = Vector<double>{7}; calls\n";
    v2 = Vector<double>{7};
    std::cout << "\nVector<double> v3{std::move(v1)}; calls\n";
    Vector<double> v3{std::move(v1)};  // now v1 should not be used
    std::cout << "\nv3 = v2; calls\n";
    v3 = v2;
    std::cout << "\nv2 = " << v2;
    std::cout << "v3 = " << v3;

    std::cout << "\nassign some values to v3\n";
    {
      // auto i = v3.size();
      // while (i--)
      //   v3[i] = i;

      int c = 0;
      for (auto& x : v3)
        x = c++;
    }
    // v3=v3;
    std::cout << "\nv2 = " << v2;
    std::cout << "v3 = " << v3;

    std::cout << "\nVector<double> v4{v3 + v3}; calls\n";
    Vector<double> v4{v3 + v3};

    std::cout << "v4 = " << v4;

    std::cout << "\nNRVO: Named Return Value Optimization\n";

    std::cout << "\nv4 = v3 + v3 + v2 + v3; calls\n";
    v4 = v3 + v3 + v2 + v3;
    std::cout << "v4 = " << v4;

    std::cout << "\nLet's test our assert in operator+\n";
    std::cout << "Vector<int> a{5};\n"
              << "Vector<int> b{7};\n"
              << "Vector<int> c{a + b}; this will throw an exception\n";
    Vector<int> a{5};
    Vector<int> b{7};
    Vector<int> c{a + b};
    return 0;
  } catch (std::runtime_error& e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}
