#include <stdint.h>
#include <stdio.h>

#include "AdConstants.h"
#include "AdFunctions.h"
#include "AdTypes.h"

void printScene(float speedInMPS, uint32_t laneIDX)
{
    // TODO
    int speed = 30;
    int lane = 1;
    printf("Create the properties of a vehicle.\n");
    printf("Speed in m/s: %d\n", speed);
    printf("Lane (1=left, 2=center, 3=right): %d\n\n\n", lane);
    printf("\t \tL\t\tC\t\tR\n");
    printf("\t|\t \t|\t \t|\t \t|\n");
    switch (lane)
    {
    case 1:
        printf("\t|\tX\t|\t \t|\t \t|\n");
        break;
    case 2:
        printf("\t|\t \t|\tX\t|\t \t|\n");
        break;
    case 3:
        printf("\t|\t \t|\t \t|\tX\t|\n");
    }
    printf("\t|\t \t|\t \t|\t \t|\n");
    return 0;
}

void getUserInput(float *speedInMPS, uint32_t *laneIDX)
{
    // TODO
}

void handleLateralUserInput(uint32_t *laneIDX, char lateralAction)
{
    // TODO
}

void handleLongitudinalUserInput(float *speedInMPS, char longAction)
{
    // TODO
}
