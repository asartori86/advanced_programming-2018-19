# Exercises 02

### Teaser

- import the module named `this` from the interactive shell
- import the module named `antigravity`



### Lambda

- Given a list of words (`str`), construct a new **ordered** list from the former where words are sorted   by their reversed spelling using  a `lambda` function.

*Hint*: use `sorted` and its keyword argument `key`



### Sequence

- Write a class `Sequence`.
  - Constructor takes an iterable. Internally, use a `list`
  - Find the way to support the following syntax
    1. `s = Sequence(range(10))`
    2. `print(s)` prints all the elements (hint: `__str__`)
    3. `len(s)` (hint: `__len__`)
    4. `s == other_s` (hint: `__eq__`, `all`)
    5. `print(s[-1])` (hint: `__getitem__`)
    6. `s[0] = 1` (hint: `__setitem__`)
    7. `del s[1:4:2]` (hint: `__delitem__`)
    8. `for x in s` (hints: `__iter__`, `iter`)
    9. `s.insert(position, value)`
    10. `s.append(value)`
    11. `s2 = copy.copy(s1)` is a **deepcopy ** (hint: `__copy__`)