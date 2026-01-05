
# Task: Introduction to Pointers in C

## Objective

The goal of this task is to understand the basic usage of pointers in C, including how to declare pointers, assign addresses to them, and dereference them to access or modify values.

## Task Description

Write a simple C program that:

1. Declares an integer variable `aValue` and assigns it the value 42.
2. Declares a pointer `myPointer` that stores the address of the variable `aValue`.
3. Uses the pointer `myPointer` to:
   - Print the value of `aValue` using pointer dereferencing.
   - Modify the value of `aValue` to 20 through the pointer.
   - Print the modified value of `aValue`.
4. Declare a pointer `yourPointer` and make it point to the same address as `myPointer`. Use `yourPointer` to further modify the value of `aValue`.
5. Print the address of `aValue` using both `myPointer` and `yourPointer`.

## Expected Output

The output of your program should be as follows:

```bash
Initial value:                                  42
Value through pointer:                          42
Modified value of aValue through myPointer:     20

Address of aValue:       00000066BCBFFB04
Address of myPointer:    00000054D9DFF920
Address of yourPointer:  00000054D9DFF918
```

---

## Let's code
