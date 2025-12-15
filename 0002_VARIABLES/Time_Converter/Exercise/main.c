#include <stdio.h>

int main()
{
    // variable declaration
    float milliseconds = 0;
    float seconds;
    float minutes;
    float hours;
    float days;

    // calculations
    printf("Please enter a millisecond value: ");
    scanf("%f", &milliseconds);
    seconds = milliseconds / 1000;
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;

    // outputs
    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);
    return 0;
}
