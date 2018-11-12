# 07_inheritance



## 00_first_trial.cc

[link to file](./00_first_trial.cc)

A naive implementation of a base class (animal) and of some derived classes without
using inheritance.

PPP: chap 14.3
CPL: chap 20.1, 20.2



## 01_inheritance.cc

[link to file](./01_inheritance.cc)

In this implementation *inheritance* is used, it shows also what can happen when you handle a
derived class with a base class pointer.


PPP: chap 14.3
CPL: chap 20.1, 20.2



## 02_virtual.cc

[link to file](./02_virtual.cc)

This program shows the usage of the `virtual` keyword when working with derived classes methods.
The specifier `override` is used to force the override of a base class method.

PPP: chap 14.3.2
CPL: chap 3.2.2, 3.2.3, 3.2.4 for an introduction, chap 20 for more details




## 03_virtual_destructor.cc

[link to file](./03_virtual_destructor.cc)

Shows the order in which the constructors and the destructors for derived objects are
called. This is one of the reasons why a *virtual destructor* is needed when working with pointers
to base classes.

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
