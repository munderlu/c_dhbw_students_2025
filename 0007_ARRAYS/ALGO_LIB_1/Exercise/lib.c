#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "lib.h"

bool allOf(int32_t *array, size_t length, int32_t value)
{
    for (size_t i = 0; i < length; i++){
        if (array[i] != value){
            return false;
        }
    }
    return true;
}

bool anyOf(int32_t *array, size_t length, int32_t value)
{
    for (size_t i = 0; i < length; i++){
        if (array[i] == value){
            return true;
        }
    }
    return false;
}

bool noneOf(int32_t *array, size_t length, int32_t value)
{
    for (size_t i = 0; i < length; i++){
        if (array[i] == value){
            return false;
        }
    }
    return true;
}

long long unsigned int count(int32_t *array, size_t length, int32_t value)
{
    long long unsigned int count = 0;
    for (size_t i = 0; i < length; i++){
        if (array[i] == value){
            count++;
        }
    }
    return count;
}
