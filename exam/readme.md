# Exam Advanced Programming
### How to submit
The work is collaborative. Groups of 2 students are recommended but you can choose. Make sure that the work (and the lines of code written) is evenly distributed.
```
git log --author='Alberto' --stat  |  awk '/insertions/ {i+=$4} ; /deletions/ {d+=$6} END{print i-d}'
```

Work with `git` in one ad-hoc repository that you create for this exam. Use branches and pull/merge requests. If you will, you can have a private repository for free in gitlab.

At the end of the work, one student per group should send me either the link to the repository or a `tar.gz` of the files (including the `.git` folder).

In each repository we expect to see two folders `c++` and `python` containing the implementation of the two assignments.

## Deadline

- MHPC students: due to Januray 18, 2019 11:59 PM
- DSSC students: due to February 22, 2019 11:59 PM
- PhD students: before your defense :)

## C++ part

Please refer to this [file](./c++/readme.md).

## Python part

Please refer to this [file](./python/exam_requests.py).
