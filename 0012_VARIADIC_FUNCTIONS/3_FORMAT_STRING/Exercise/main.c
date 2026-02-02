#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/*
 * Variadic logging function that interprets a format string
 * and outputs the corresponding arguments.
 *
 * Supported format specifiers:
 *   %d - integer
 *   %f - floating-point number
 *   %s - string
 */
void logMessage(const char *format, ...)
{
    if (format == NULL)
    {
        printf("(null format string)\n");
        return;
    }

    // TODO
}

int main(void)
{
    // Example 1: Basic usage with all format specifiers
    printf("Example 1:\n");
    logMessage("Integer: %d, Float: %f, String: %s", 42, 3.14, "Hello World");

    // Example 2: Multiple integers
    printf("\nExample 2:\n");
    logMessage("Numbers: %d, %d, %d", 10, 20, 30);

    // Example 3: Multiple floats
    printf("\nExample 3:\n");
    logMessage("Pi = %f, E = %f", 3.14159, 2.71828);

    // Example 4: String concatenation
    printf("\nExample 4:\n");
    logMessage("Hello %s, welcome to %s!", "Alice", "C Programming");

    // Example 5: Mixed arguments
    printf("\nExample 5:\n");
    logMessage("Score: %d points, Average: %f, Player: %s",
               95, 87.5, "Bob");

    // Example 6: No format specifiers
    printf("\nExample 6:\n");
    logMessage("This is a plain message without format specifiers.");

    // Example 7: Edge case - escaped percent
    printf("\nExample 7:\n");
    logMessage("Progress: %d%% complete", 75);

    // Example 8: Empty string
    printf("\nExample 8:\n");
    logMessage("");

    return 0;
}
