# Advanced Programming [![Build Status](https://travis-ci.org/asartori86/advanced_programming-2018-19.svg?branch=master)](https://travis-ci.org/asartori86/advanced_programming-2018-19)

[SISSA webpage](http://www.math.sissa.it/course/phd-course-master-course/advanced-programming-0)

The course aims to provide advanced knowledge of both theoretical and practical programming in C++11 and Python3, with particular regard to the principles of object-oriented programming and best practices of software development.

Syllabus:

- Introduction to C++11. You will learn the logic and the basics of C++11, the built-in data types and how to effectively use them. Best practices in programming will be addressed.
- Object orientation in C++11. The principles of Object-Oriented programming will be presented with particular attention to their implementations in C++11. Some of the most important Design Patterns will be discussed.
- Advanced features of C++14/17. Some of the new features of standard C++/14/17 will be introduced and explained.
- Python3. After a recap of the basics of Python3, you will learn how to program in object-oriented fashion in the Python3 programming language.
- How to combine the two languages. Several methods to combine the two languages will be presented.


## Prerequisites
- Familiarity with linux terminal and a text editor (e.g., emacs, vim)
- A bit of knowledge of git is helpful

## References

- Programming: Principles and Practice using C++ (Second Edition),
  Bjarne Stroustrup, Addison-Wesley 2014, ISBN 978-0-321-99278-9

 - The C++ Programming Language, Bjarne Stroustrup, Addison-Wesley
   2013, ISBN 978-0321563842

## Locations
- Lecture room is A-005 in the main SISSA building in via Bonomea 265.
- On 9/10 and 11/10 the lectures will be held in A-004

## How to get the material
### Non-experienced git users
- Very first time `(N==0)`
  - open a terminal
  - `cd` in a suitable folder
  - `git clone https://github.com/asartori86/advanced_programming-2018-19.git`
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
