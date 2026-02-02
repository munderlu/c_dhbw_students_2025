# Exercise: Variadic Function with format String

## **Task**

Implement a simplified logging function `logMessage` that interprets a format string and outputs the corresponding arguments.

1. The function should take a format string followed by a variable number of arguments.
2. The format string can contain the following specifiers:
   - `%d` for integers
   - `%f` for floating-point numbers
   - `%s` for strings

---

## **Requirements**

1. Use a variadic function to accept multiple arguments based on the format string.
2. Correctly interpret and print each argument according to its corresponding format specifier.
3. Handle cases where the number of arguments does not match the number of format specifiers gracefully.

---

## **Example Output**

### **Example 1:**

```terminal

logMessage("Integer: %d, Float: %f, String: %s", 42, 3.14, "Hello World");
Integer: 42, Float: 3.140000, String: Hello World

```
