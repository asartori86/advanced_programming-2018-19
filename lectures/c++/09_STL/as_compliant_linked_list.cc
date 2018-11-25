#include <algorithm>
#include <chrono>
#include <iostream>
#include <iterator>
#include <memory>
#include <numeric>
#include <random>
#include <stdexcept>
#include <vector>

enum class method { push_back, push_front };

template <class T>
class List {
  struct Node {
    T val;
    std::unique_ptr<Node> next;
    Node(const T& v, Node* n) : val{v}, next{n} {}
    ~Node() = default;
  };
  std::unique_ptr<Node> head;
  void push_front(const T& t) { head.reset(new Node{t, head.release()}); }
  void push_back(const T& t);

  std::size_t _size = 0;

 public:
  template <class ot>
  friend std::ostream& operator<<(std::ostream&, const List<ot>&);
  List() = default;
  void push(const T& t, method m = method::push_front) {
    if (head == nullptr) {
      head.reset(new Node{t, nullptr});
      _size++;
      return;
    }
    switch (m) {
      case method::push_back:
        push_back(t);
        break;

      case method::push_front:
        push_front(t);
        break;
      default:
        throw std::runtime_error{"unknown method\n"};
    };
    _size++;
  }
  class Iterator;
  class ConstIterator;
  Iterator begin() { return Iterator{head.get()}; }
  Iterator end() { return Iterator{nullptr}; }

  ConstIterator begin() const { return ConstIterator{head.get()}; }
  ConstIterator end() const { return ConstIterator{nullptr}; }

  ConstIterator cbegin() const { return ConstIterator{head.get()}; }
  ConstIterator cend() const { return ConstIterator{nullptr}; }

  std::size_t size() const { return _size; }
};

template <class T>
class List<T>::Iterator : public std::iterator<std::forward_iterator_tag, T> {
  using Node = List<T>::Node;

  Node* current;

 public:
  Iterator(Node* n) : current{n} {}
  Iterator(const Iterator&) = default;
  T& operator*() const { return current->val; }
  Iterator& operator++() {
    current = current->next.get();
    return *this;
  }
  Iterator operator++(int) {
    Iterator it{*this};
    ++(*this);
    return it;
  }
  bool operator==(const Iterator& other) { return current == other.current; }
  bool operator!=(const Iterator& other) { return !(*this == other); }
};

template <class T>
class List<T>::ConstIterator : public List<T>::Iterator {
 public:
  using parent = List<T>::Iterator;
  using parent::Iterator;
  const T& operator*() const { return parent::operator*(); }
};

template <typename T>
void List<T>::push_back(const T& t) {
  auto tmp = head.get();
  while (tmp->next != nullptr) {  // equivalent while(tmp->next)
    tmp = tmp->next.get();
  }
  tmp->next.reset(new Node{t, nullptr});
}

template <class T>
std::ostream& operator<<(std::ostream& os, const List<T>& l) {
  for (const auto& x : l)
    os << x << " ";
  os << std::endl;
  return os;
}

int main() {
  auto t0 = std::chrono::high_resolution_clock::now();
  srand(11);
  List<int> list;
  list.push(3);                       // calls push_front
  list.push(5, method::push_back);    // calls push_back
  list.push(42, method::push_front);  // calls push_front

  for (auto& x : list) {
    ++x;
  }
  std::cout << list;

  // compute the sum
  auto sum = std::accumulate(list.cbegin(), list.cend(), int(0));
  std::cout << "the sum is " << sum << std::endl;

  // suppose 43 means invalid read (e.g., the sensor is broken)
  sum = std::accumulate(list.cbegin(), list.cend(), int(0),
                        [](const int a, const int b) {
                          if (b == 43)
                            return a;
                          return a + b;
                        });
  std::cout << "the sum (without 43) is " << sum << std::endl;

  // same story but without specifying the type of the variable
  sum = 0;
  sum = std::accumulate(
      list.cbegin(), list.cend(), sum,
      [](decltype(*list.cbegin()) a, decltype(*list.cbegin()) b) {
        if (b == 43)
          return a;
        return a + b;
      });

  std::cout << "the sum (without 43) is " << sum << std::endl;

  // sort the list (requires random access iterator)
  std::vector<int> v(list.size());

  std::copy(list.cbegin(), list.cend(), v.begin());

  // ascending order
  std::sort(v.begin(), v.end(), std::greater<int>{});

  for (const auto x : v)
    std::cout << x << " ";
  std::cout << std::endl;

  // descending order
  std::sort(v.begin(), v.end(), std::less<int>{});

  for (const auto x : v)
    std::cout << x << " ";
  std::cout << std::endl;

  for (auto i = 0; i < 10; ++i)
    v.emplace_back(rand() % 10);
  // custom
  std::sort(v.begin(), v.end(), [](const int a, const int b) { return a > b; });

  for (const auto x : v)
    std::cout << x << " ";
  std::cout << std::endl;

  auto t1 = std::chrono::high_resolution_clock::now();

  std::cout
      << "the program took "
      << std::chrono::duration_cast<std::chrono::microseconds>(t1 - t0).count()
      << " microseconds" << std::endl;

  return 0;
}
