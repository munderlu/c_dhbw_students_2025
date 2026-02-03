#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
    // TODO: Part 1 - Calculate Pi
    int numIterations;
    double piCalculated;
    double piDecimalPlaces20 = 3.14159265358979311600;
    printf("please enter a number of iterations:\n");
    scanf("%d", &numIterations);
    for (int k = 0; k < numIterations; k++){
        double fraction1 = 1.0 / (4.0 * k +1);
        double fraction2 = 1.0 / (4.0 * k +3);

        piCalculated += fraction1 - fraction2;
    }
    piCalculated *= 4.0;

    printf("number of iterations: %u\n", numIterations);
    printf("pi (calculated with approximation):\t%.20lf\n", piCalculated);
    printf("pi (correct on 20 decimal places):\t%.20lf\n\n", piDecimalPlaces20);

    // TODO: Part 2 - Decimal to Binary
    int decimalNumber;
    printf("Enter a decimal number:\n");
    scanf("%d", &decimalNumber);
    int rest = decimalNumber;
    while (rest < 0){
        printf("Hallo");
    }

    return 0;
}
