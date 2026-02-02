#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

const int MAX_WORDS = 10;
const int BUFFER_SIZE = 1024;

/*
 * Variadic function that prints an arbitrary number of strings.
 * The argument list must be terminated with a NULL pointer.
 */
// TODO

int main(void)
{
    char buffer[BUFFER_SIZE];

    printf("Please enter max. %d words (char buffer[%d]):\n", MAX_WORDS, BUFFER_SIZE);

    // Read a full line including spaces
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    // Remove trailing newline if present
    buffer[strcspn(buffer, "\n")] = '\0';

    // Tokenize input into 20 words at most
    char *tokens[MAX_WORDS + 1]; // +1 for sentinel
    int count = 0;

    char *token = strtok(buffer, " ");
    while (token != NULL && count < MAX_WORDS)
    {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }

    // Add sentinel value
    tokens[count] = NULL;

    // If no words were entered
    if (count == 0)
    {
        printStrings(NULL);
    }
    else
    {
        // Call the variadic function with the tokens
        printStrings(tokens[1], tokens[2], tokens[3], tokens[4],
                     tokens[5], tokens[6], tokens[7], tokens[8], tokens[9],
                     tokens[10],
                     NULL); // Ensure to terminate with NULL
    }

    if (count >= MAX_WORDS)
        printf("\nYou entered the maximum of %d words or more.\n\n", MAX_WORDS);
    else
        printf("\nYou entered %d words.\n\n", count);

    return 0;
}
