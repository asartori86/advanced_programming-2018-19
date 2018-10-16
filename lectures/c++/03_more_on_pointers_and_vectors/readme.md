# Lecture 03_more_on_pointers_and_vectors




## 01_auto.cc

[link to file](./01_auto.cc)

This program introduces the `auto` specifier. When you declare a variable with this keyword
its type will be automatically deduced by the compiler.

PPP: chap 20.5.2
CPL: chap 2.2.2, chap 6.3.6



## 02_const_and_pointers.cc

[link to file](./02_const_and_pointers.cc)

This example teaches you how to declare a `const` pointer or a pointer to
a `const` object. It also introduces the usage of the *sentinel* method to handle
arrays in c++.

CPL: chap 7.5



## 03_special_pointers.cc

[link to file](./03_special_pointers.cc)

Here you can find more about pointers, like the `nullptr` keyword, the `static_cast`
function, that can be used to safely perform conversions at compile time between compatible types,
and the pointers to functions. `decltype()` is a function that returns the type of its argument.

PPP: chap 17.4.5 nullptr, appendix A.5.7 static_cast, chap 27.2.5 pointer to func
CPL: chap 2.2.5 nullptr, chap 6.3.6.3 decltype, chap 11.5.2 static_cast, chap 12.5 pointer to func




## 04_command_line_args.cc

[link to file](./04_command_line_args.cc)

This is a small example on how you can pass arguments to a program from the command
line.

CPL: chap 10.2.7




## 05_matrices.cc

[link to file](./05_matrices.cc)

This example shows the basics of how to implement the mathematical concept of matrix.

CPL: chap 7.4.2 and 7.4.3 multidimensional arrays and passing arrays



## 06_std_arrays.cc

[link to file](./06_std_arrays.cc)

Introduction to the usage of `std::array` defined in the *array* header, together with
*the range-for loop* that allows to iterate its elements.

PPP: chap 20.9
CPL: chap 2.2.5 range-for loop, chap 34.2.1 array



## 07_std_vectors.cc

[link to file](./07_std_vectors.cc)

Introduction to the `std::vector` class defined in the *vector* header, more examples
of the range-for loop and usage of the `at()` method for range checking.

CPL: chap 31.4.1







### References:

[PPP]  Programming: Principles and Practice using C++ (Second Edition), Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

[CPL]  The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley 2013, ISBN 978-0321563842
