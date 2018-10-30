# Lecture 05_error_handling



## 00_errno.cc

[link to file](./00_errno.cc)

The example shows one of the common problems with the error handling in the C language.
The `errno` macro can be used by any function of the standard C library to signal a
particular error.

PPP: chap 5.5
CPL: 13.1.2 traditional error handling




## 01_exceptions.cc

[link to file](./01_exceptions.cc)

Implement a simple square root function that `throw`s exceptions defined by the user, in
particular these are simple `struct` with a name that represent the kind of error.
The function is then tested using the `try` and `catch` constructions.

PPP: chap 5.6 exceptions
CPL: 13.5 throwing and catching exceptions




## 02_exceptions.cc

[link to file](./02_exceptions.cc)

Same example as before, but now the exception is a `struct` that contains the message to be
printed.




## 03_error.cc

[link to file](./03_error.cc)

Again the same example of the square root function, but this time the [ap_error.h](./ap_error.h)
header file is used.
We can see the behaviour of the `AP_ERROR()` macro, and that of many other macros defined there.



## 04_assert.cc

[link to file](./04_assert.cc)

The `assert` is a macro derived from the C language and it's contained in *assert.h*.
It calls the `abort()` function, thus terminating the program, if the condition is false.

CPL: chap 13.4 assert macro




## 05_stack_unwinding.cc

[link to file](./05_stack_unwinding.cc)

The program demonstrates how the *stack unwinding* is performed. This practice is the
destruction of created objects when the end of the scope is reached or when an exception has been
thrown.

CPL: chap 13.5






## 06_smart_pointers.cc

[link to file](./06_smart_pointers.cc)

This program introduces you to the usage of *smart pointers*, defined in the
*memory* header. The `unique_ptr` is able to manage by himself the memory he holds,
thus avoiding memory leaks.

PPP: chap 19.5.4 unique_ptr, appendix B.6.5
CPL: 5.2.1 unique_ptr and shared_ptr





## ap_error.h

In this header file there are the implementations of the macros used in the previous programs.
You can find a description of its main features and some examples of its usage at the beginning
of the file.

PPP: chap 27.8 macros
CPL: chap 12.6 macros








### References:

[PPP] = Programming: Principles and Practice using C++ (Second Edition), Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

[CPL] = The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley 2013, ISBN 978-0321563842
