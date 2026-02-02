#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "utils.h"

#include "AdFunctions.h"

int main()
{
    printf("Create the properties of a vehicle.\n");

    float speedInMPS;
    printf("Speed in m/s: ");
    scanf("%f", &speedInMPS);

    uint32_t laneIDX;
    printf("Lane (1=Left, 2=Center, 3=Right): ");
    scanf("%u", &laneIDX);

    while (true)
    {
        clear_console(); // not a standard function and not self defined

        printScene(speedInMPS, laneIDX);
        getUserInput(&speedInMPS, &laneIDX);
    }

    return 0;
}
