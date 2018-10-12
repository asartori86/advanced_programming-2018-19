# Exercises - session 03

## Matrix transpose

- Write a function that computes the transpose of a matrix. The matrix is represented by a simple `std::array<double,N>` where N is the total size of the matrix (i.e., number of rows times number of columns). The original array must be modified inside the a function `transpose`.

*Hints*: 

- In C/C++, the matrices are accessed row-wise
- Don't try to use that for very big matrices, otherwise you go in stack overflow.
- You are not required to do the transpose *in place*
- Test with both square and rectangular matrices.




## Mean and Median

- Store the numbers contained in file `temperatures.txt` into an `std::vector<double>` and compute:
  - the mean
  - the median

*Hints*:

- use `push_back()`
- you can increment a variable using `+=` operator
- you can **sort** the elements of a vector `v` as follows
```c++
#include <algorithm>

std::vector<double> v;
...
std::sort( v.begin(), v.end() );
```


## Avoid repeated words

- Read from stdin a sequence of words. Store each word in a `std::vector<std::string>`. Then, print the words without repetitions.

*Hints*:

- you can print the words in any order you want (i.e., you are not required to print the words in the order you have read them)

## **Optional**: Use `std::map` and `std::unordered_map`

- Read the `LittleWomen.txt` and then print all the read words (without repetitions) followed by the number of repetitions of that word. Compare the time to do the same using `std::vector`, `std::map`, `std::unordered_map`. The order in which the words are printed is **not** relevant.

