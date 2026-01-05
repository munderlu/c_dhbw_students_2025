#include <stdint.h>
#include <stdio.h>

int main()
{
    uint32_t inputNumber = 0;

    printf("Please enter a unsinged integer: ");
    scanf("%u", &inputNumber);

    // sum of digits
    uint32_t numDigits = 0;

    // CODE HERE //

    printf("sum of digits: %u\n", numDigits);

    // cross sum
    uint32_t crossSum = 0;
    
    // CODE HERE //

    printf("crossSum: %u\n", crossSum);

    return 0;
}
