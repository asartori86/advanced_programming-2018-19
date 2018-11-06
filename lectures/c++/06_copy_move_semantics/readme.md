# 06_copy_move_semantics


## 01_surprise.cc

[link to file](./01_surprise.cc)

This program highlights that a compiler is able to generate a default
constructor, copy constructor, copy assignment, move constructor and
move assignment, and illustrates their syntax. The function
`std::move()` is used.


PPP: chap 18.3 copying
CPL: chap 17.5 copy and move




## 02_default.cc

[link to file](./02_default.cc)

Shows how to use the `default` keyword to explicitly ask the compiler
to create a default constructor (or assignment operator) even if other
constructors are present. The keyword `delete`, instead, is used to
eliminate a particular function. The aggregate initialization is
addressed as well.

PPP: chap 9.7.3 default constructors
CPL: chap 17.6.1 default, chap 17.6.4 delete




## 03_default.cc

[link to file](./03_default.cc)

Shows the usage of *in-class* initialization and aggregate initialization and their relationships with the constructors.

PPP: chap 9.7.3



## 04_buggy_vector.cc

[link to file](./04_buggy_vector.cc)

This program illustrates the behavior of the class Vector, that
handles some **allocated** memory, when a proper copy constructor is
not defined, and the one provided by the compiler is used (**shallow
copy**). The constructor for this class is defined `explicit`.


PPP: chap 18.4.1 explicit constructor
CPL: chap 16.2.6 explicit constructor



## 05_buggy_vector.cc

[link to file](./05_buggy_vector.cc)

Same as the previous one, but this time the elements are stored using a `std::unique_ptr`. No copy semantic can be defined by the compiler because it has been `delete`d in the `std::unique_ptr` class




## 06_copy_move.cc

[link to file](./06_copy_move.cc)

Implements the copy and move semantics for the Vector class and shows some examples.

PPP: chap 18.3 copying
CPL: chap 17.5 copy and move




## 07_copy_on_write.cc

[link to file](./07_copy_on_write.cc)

Again the Vector example, now using the `std::shared_ptr` pointer. The class has a `deep_copy()` function
that illustrates the concept with the same name. This design could be used to implement the **Copy On Write (COW)** pattern.

PPP: appendix B.6.5
CPL: chap 17.5.1.3





### References:

[PPP] = Programming: Principles and Practice using C++ (Second Edition), Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

[CPL] = The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley 2013, ISBN 978-0321563842
