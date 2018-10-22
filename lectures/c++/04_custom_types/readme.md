# Lecture 04_custom_types


## 01_enum.cc

[link to file](./01_enum.cc)

The idea behind enumeration is to create a new type whose values are restricted to a specific
range or set of values. This example illustrates the plain `enum` syntax and usage.

PPP: chap 9.5
CPL: chap 8.4



## 02_scoped_enum.cc

[link to file](./02_scoped_enum.cc)

Introduces the *scoped enum*, extension of the "plain enum" described before. Now the enumerator name
must be qualified by the enum type name and the scope resolution operator. Implicit conversion to integers
is not allowed.

PPP: chap 9.5
CPL: chap 8.4



## 03_why_scoped.cc

[link to file](./03_why_scoped.cc)

This program demonstrates how the plain enum can generate confusion, this is the reason why
the scoped enum is generally better.



## 04_struct_class.cc

[link to file](./04_struct_class.cc)

The program implement a very simple `struct` and a very simple `class` to show the different
behaviour of their members, in particular the private ones of the class.


PPP: 9.2, 9.3 and 9.4
CPL: chap 16 for classes, in particular chap 16.2.4 (class and struct)



## 05_constructor_destructor.cc

[link to file](./05_constructor_destructor.cc)

This example introduces you to the concepts of constructor and destructor for a class. Here you
can also find the first example of *operator overloading*.

PPP: chap 9.4.2 constructors, chap 17.5 destructors, chap 9.6 operator overloading
CPL: chap 16.2.5 constructors, chap 17.2 constructors and destructors, chap 18 operator overloading



## 06_template_class.cc

[link to file](./06_template_class.cc)

A naive implemantation of a vector class, using the template for the type stored in the vector.
This class has a constructor, a destructor, a member function and two versions of the
array subscript operator [] (the second is declared const and returns a const reference).






###References:

[PPP] = Programming: Principles and Practice using C++ (Second Edition), Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

[CPL] = The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley 2013, ISBN 978-0321563842