# Lecture 02_functions_and_arrays



## 01_functions.cc

[link to file](./01_functions.cc)

This program contains an example of *function overloading*. You can give two
functions the same name provided that they differ by the types and/or the
number of arguments.

CPL: chap 12.3



## 02_templates.cc

[link to file](./02_templates)

This program introduces the usage of *templates* for the function of the previous
example. The template allows the function to work with different kinds of types, thus
avoiding code repetitions.

PPP: chap 19.3
CPL: chap 3.4.1, 3.4.2



## 03_wrong_args.cc

[link to file](./03_wrong_args.cc)

This is an example of how arguments are passed in C++, the paradigm used is the *pass by value*.

PPP: chap 8.5.3



## 04_vars_pointers_refs.cc

[link to file](./04_vars_pointers_refs.cc)

Brief introduction to the concepts of *pointer* and *reference*, with a demonstration of
their usage and syntax.

PPP: chap 17.3, chap 17.9
CPL: chap 7.2 for pointers, 7.7 for references



## 05_swaps.cc

[link to file](./05_swaps.cc)

This is an improvement of the program [05_functions.cc](../01_intro/05_functions.cc) using the
template for the swap function. The program makes also use of the `std::swap` function
you can find in the *utility* header.



## 06_static_arrays.cc

[link to file](./06_static_arrays.cc)

Brief introduction to arrays in C++, examples of declaration and various initializations.
There is also a demonstration of their consecutive representation in memory.
The `std::string` class is a good alternative for `char` arrays.

PPP: chap 17.2 arrays, chap 18.6 array and pointers
CPL: chap 7.3 arrays



## 07_dynamic_arrays.cc

[link to file](./07_dynamic_arrays.cc)

Usage of the `new` function to allocate memory on the *heap* (also called free-store or dynamic memory)
and consequent usage of `delete` to free it.

PPP: chap 17.4
CPL: chap 11.2








### References:

[PPP]  Programming: Principles and Practice using C++ (Second Edition), Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

[CPL]  The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley 2013, ISBN 978-0321563842
