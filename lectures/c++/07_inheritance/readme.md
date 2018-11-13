# 07_inheritance



## 00_first_trial.cc

[link to file](./00_first_trial.cc)

A naive and conceptually wrong implementation of a series of classes that share data and inheritance.

PPP: chap 14.3
CPL: chap 20.1, 20.2



## 01_inheritance.cc

[link to file](./01_inheritance.cc)

A wrong implementation with *inheritance*. In particular, the run-time polymorphism is not working.

PPP: chap 14.3
CPL: chap 20.1, 20.2



## 02_virtual.cc

[link to file](./02_virtual.cc)

This program shows the usage of the `virtual` keyword when working with derived classes methods.
The specifier `override` is used to force the compiler to check that we are actually overriding a function of the base class.

PPP: chap 14.3.2
CPL: chap 3.2.2, 3.2.3, 3.2.4 for an introduction, chap 20 for more details




## 03_virtual_destructor.cc

[link to file](./03_virtual_destructor.cc)

Shows the order in which the constructors and the destructors for derived objects are
called. Using run-time polymorphism, to call the proper destructor (and not always and only the destructor of the base class), the destructor of the base class must be *virtual*.

PPP: chap 17.5.2
CPL: chap 17.2.5



## 04_private.cc

[link to file](./04_private.cc)

Introduces the concept of *pure virtual functions* and of *abstract classes*.

PPP: chap 14.3.5
CPL: chap 20.4



## 05_dynamic_cast.cc

[link to file](./05_dynamic_cast.cc)

This example illustrates the usage of dynamic casting to perform a type conversion at run-time.

PPP: appendix A.5.7
CPL: chap 22.2.1



### References:

[PPP] = Programming: Principles and Practice using C++ (Second Edition), Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

[CPL] = The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley 2013, ISBN 978-0321563842
