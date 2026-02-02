# Exercise

Implement the following functions:

```cpp
bool stringStartsWith(char *string, char *substr);

bool stringEndsWith(char *string, char *substr);

char *stringFindFirstNotOf(char *string, char *substr);

```

- stringStartsWith
  - Return true if the **string** starts with **substr**

- stringEndsWith
  - Return true if the **string** ends with **substr**

- stringFindFirstNotOf
  - Return the position of the **string** where the first character after the starting **substr** is

Note: Make sure that the input pointer is valid.

## Example Output

```bash

Inputtext: INF 1004 AT DHBW
stringStartsWith: 1
stringEndsWith: 1
stringStartsWith: 0
stringEndsWith: 0
stringFindFirstNotOf: 1004 AT DHBW
stringFindFirstNotOf: INF 1004 AT DHBW
Assertion failed: stringFindFirstNotOf("aaaaaa", "a") == NULL, file c:\PandaLehre\c_dhbw\04_xtra_coding_exercises\09_StringLib2\Solution\main.c, line 42

```
