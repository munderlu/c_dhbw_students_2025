#ifndef AD_FUNCTIONS_H
#define AD_FUNCTIONS_H

#include <stdint.h>

void printScene(float speedInMPS, uint32_t laneIDX);

void getUserInput(float *speedInMPS, uint32_t *laneIDX);

void handleLateralUserInput(uint32_t *laneIDX, char lateralAction);
void handleLongitudinalUserInput(float *speedInMPS, char longAction);

#endif
