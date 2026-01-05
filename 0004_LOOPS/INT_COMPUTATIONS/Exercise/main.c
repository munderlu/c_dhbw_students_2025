#include <stdint.h>
#include <stdio.h>

int main()
{
    uint32_t inputNumber = 0;

    printf("Please enter a unsigned integer: ");
    scanf("%u", &inputNumber);

    // sum of digits
    uint32_t numDigits = 0;
    uint32_t tempNumber = inputNumber;

    while (tempNumber){
        numDigits++;
        tempNumber /= tempNumber;
    }

    printf("sum of digits: %u\n", numDigits);

    // cross sum
    uint32_t crossSum = 0;
    tempNumber = inputNumber;
    
    for (uint32_t i = 0; i < numDigits; i++){
        crossSum += tempNumber % 10;
        tempNumber /= 10;
    }

    printf("crossSum: %u\n", crossSum);

    return 0;
}
