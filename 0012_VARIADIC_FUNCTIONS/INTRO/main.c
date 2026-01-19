#include <stdio.h>   // Standard Input/Output-Bibliothek
#include <stdarg.h>  // Variadic Functions Libary

// Function for calculating the sum of a variable number of arguments
int calcSumVariadicFunc(int count, ...){
    va_list args;
    int tempSum = 0;
    va_start(args, count);
    for (int i = 0; i < count; i++)
    {
        tempSum += va_arg(args, int);
    }
    va_end(args);
    
    return tempSum;
}

int main()
{
    printf("Sum of 1, 2, 3 --> %d\n", calcSumVariadicFunc(3, 1, 2, 3)); // Expected output: 6
    printf("Sum of 4, 5, 6, 7, 11, 12, 13 --> %d\n", calcSumVariadicFunc(7, 4, 5, 6, 7, 11, 12, 13));

    return 0;
}