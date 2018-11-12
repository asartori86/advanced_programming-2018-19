#include <iostream>  // std::cout
#include <memory>    // std::unique_ptr

template <class T>
class Vector {
  std::unique_ptr<T[]> elem;  // the real data
  std::size_t _size;
  std::size_t _free_slots = 0;

  void check_and_alloc();

 public:
  Vector(const std::size_t length) : elem{new T[length]}, _size{length} {}

  auto size() const noexcept { return _size; }

  T& operator[](const std::size_t i) noexcept { return elem[i]; }
  const T& operator[](const std::size_t i) const noexcept { return elem[i]; }

  void push_back(const T& e);
  void push_back(T&& e);

  template <class... Args>
  void emplace_back(Args&&... args) {
    push_back(T{std::forward<Args>(args)...});
  }
};  // end of class definition

template <class T>
void Vector<T>::check_and_alloc() {
  if (_free_slots == 0) {
    auto tmp = new T[size() * 2];  // what if _size == 0 ?
    _free_slots = size();

    for (auto i = 0llu; i < size(); ++i)
      tmp[i] = std::move((*this)[i]);  // do I need to copy?

    elem.reset(tmp);
  }
}

template <class T>
void Vector<T>::push_back(const T& e) {
  check_and_alloc();
  (*this)[size()] = e;  // copy semantic
  _size++;
  _free_slots--;
}

template <class T>
void Vector<T>::push_back(T&& e) {
  check_and_alloc();
  (*this)[size()] = std::move(e);  // move semantic
  _size++;
  _free_slots--;
}

template <class T>
auto& operator<<(std::ostream& os, const Vector<T>& v) {
  for (auto i = 0llu; i < v.size(); ++i) {
    os << v[i] << " ";
  }
  os << std::endl;

  return os;
}

class Date {
  int d, m, y;

 public:
  Date(const int day, const int month, const int year)
      : d{day}, m{month}, y{year} {}

  Date() = default;
  auto day() const noexcept { return d; }
  auto month() const noexcept { return m; }
  auto year() const noexcept { return y; }
};

int main() {
  Vector<int> v{4};
  {
    auto i = v.size();
    while (i--)
      v[i] = i;
  }

  std::cout << v;

  v.push_back(5);

  std::cout << v;

  Vector<Date> vd{2};

  vd.push_back(Date{1, 2, 3});

  vd.emplace_back(1, 2, 33);

  std::cout << vd[3].year() << std::endl;

  Date{4, 5, 6};

  return 0;
}
