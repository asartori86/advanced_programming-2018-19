# Exercises - session 10

## 01 - Shared library
- Write a proper `Makefile` to generate a **shared library**. Remember to add the prefix `lib` and the suffix `.so`.
- **optional**: implement an `install` rule 
- write a `main.cc` that uses the library and link against it. Mac users can set the environment variable `LIBRARY_PATH` and have to use **absolute path**.
## 02 - compile 
- Fix all the bugs and make the code to compile and run. Do not change the name of the functions. Do not add new files. This should be the desired output. There are bugs also in the Makefile. Typos are present as well.

```
good afternoon
expect to see lower case
function to_upper has been called 1 times
function to_upper has been called 2 times
WELCOME
EXPECT TO SEE UPPER CASE
0 
```
