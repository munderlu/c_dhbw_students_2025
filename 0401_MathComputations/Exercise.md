# Exercise

In this exercise, you have to use the datatypes **double** and **int / uint** for certain computations.

## Part 1 - Calculate Pi

With the following formula, you can compute $\frac{\pi}{4}$.
Implement the formula in the function with $n$ = **num_iterations**.
Use a for-loop to sum up the values.

$x = \frac{\pi}{4} = \sum_{k=0}^n \frac{1}{(4k + 1)} - \frac{1}{(4k + 3)}$

At the end multiply by 4 before you return the value.
So the returned value will be an approximation of $\pi$ and not $\frac{\pi}{4}$.

Implement this formula with a user-defined number of iterations.

## Part 2 - Decimal to Binary

Implement the logic that prints out the binary representation of a positive decimal number.

E.g. the decimal number 142 would be 10001110 in binary.

If you do not know how the binary system works, refer to the [Wikipedia article on binary numbers](https://en.wikipedia.org/wiki/Binary_number).
Since this knowledge is not only important for this exercise but in general for a programmer.

### Hint

To compute $2^i$ you can use:

```cpp
#include <math.h>

pow(2, i)
```

## Expected Output

```bash

please enter number of iterations: 123456

number of iterations: 123456
pi (calculated with approximation):     3.14158860356391755886
pi (correct on 20 decimal places):      3.14159265358979311600

Binary of 123456: 0b11111111

```
