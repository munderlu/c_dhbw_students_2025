# Exercise: Variadic Function with sentinel value

## **Task**

Implement a variadic function ``printStrings`` that accepts a number (``MAX_WORDS``) of strings and outputs them as shown in example output.

1. The function should take a variable number of string arguments (up to ``MAX_WORDS``).
2. The function should print each string on a new line.
3. The function should handle the case where no strings are provided gracefully.
4. User prompts and input handling should be included in the main function.

---

## **Requirements**

1. Use a variadic function to accept multiple string arguments.
2. Handle the case of zero arguments without errors.
3. ``MAX_WORDS`` should be defined as a constant in your program.
4. If the user enters more than ``MAX_WORDS`` strings, only the first ``MAX_WORDS`` should be processed and the user should be informed as seen in Example 2.

---

## **Example Output**

### **Example 1:**

```terminal

Please enter max. 10 words (char buffer[1024]):
to be or not to be
be
or
not
to
be

You entered 6 words.

```

### **Example 2:**

```terminal

Please enter max. 10 words (char buffer[1024]):
to be or not to be this is what i see
be
or
not
to
be
this
is
what
i

You entered the maximum of 10 words or more.

```
