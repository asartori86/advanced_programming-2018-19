# Advanced Programming [![Build Status](https://travis-ci.org/asartori86/advanced-programming.svg?branch=master)](https://travis-ci.org/asartori86/advanced-programming)

[SISSA webpage](http://www.math.sissa.it/course/phd-course-master-course/advanced-programming)

Provide advanced knowledge of both theoretical and practical
programming in C++ and Python, with particular regard to the
principles of object oriented programming and best practices of
software development (advanced use of version control systems,
continuous integration, unit testing).

## Prerequisites
- Familiarity with linux terminal and a text editor (e.g., emacs, vim)
- A bit of knowledge of git is helpful

## References

- Programming: Principles and Practice using C++ (Second Edition),
  Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

 - The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley
   2013, ISBN 978-0321563842
 
- Design Patterns: Elements of Reusable Object-Oriented Software,
  Erich Gamma, Richard Helm, Ralph Johnson, John Vlissides, Pearson
  Education 1993.

## Locations
Lecture room is A-005 in the main SISSA building in via Bonomea 265.

## Syllabus

1. Scientific programming environment. You will learn the basic
   ingredients needed to efficiently develop scientific software in
   *nix environment.

2. Introduction to C++. You will learn the logic and the basics of
   C++, the built-in data types and how to effectively use them. Best
   practices in programming will be addressed.

3. Object orientation in C++. The principles of Object-Oriented
   programming will be presented with particular attention to their
   implementations in C++. Some of the most important Design Patterns
   will be discussed.

4. Advanced features of C++11/14/17/20. Some of the new features of
   standard C++11/14/17/20 will be introduced and explained.

5. Object-Oriented programming in Python. After a recap of the basics
   of Python, you will learn how to program in object-oriented fashion
   in the Python programming language.

## How to get the material
### Non-experienced git users
- Very first time `(N==0)`
  - open a terminal
  - `cd` in a suitable folder
  - `git clone https://github.com/asartori86/advanced-programming.git`
  - `cd advanced-programming`
  - take a look at [software carpentry lecture](http://swcarpentry.github.io/git-novice/) and [pro git book](https://git-scm.com/book/en/v2) 
- `N > 0`
  - open a terminal
  - `cd` to the folder `advanced-programming`
  - `git pull --rebase origin master`
- if(conflict)
  - ask

### Experienced git users
- Very first time `(N==0)`
  - fork the repository
  - clone either your fork or this repository
  - add the other remote
- `N >= 0`
  - use branches
  - rebase on the correct master branch
  - merge the branches in your local master
  - push on the master of your fork
- if(conflict)
  - if(rebase)
    - `git add`
    - `git rebase --continue`
    - if(bigger mess)
      	- `git rebase --abort`
  - if(merge)
    - `git add`
    - `git commit`
    - `git merge --continue`
    - if(bigger mess)
      - `git merge --abort`
