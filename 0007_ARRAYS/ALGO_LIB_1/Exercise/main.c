#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "lib.h"

int main()
{
    int32_t array[] = {3, 1, 4, 1, 5, 9, 2, 6};
    size_t length = 8;

    printf("allOf: \t\t%d\n", allOf(array, length, 5));
    printf("anyOf: \t\t%d\n", anyOf(array, length, 5));
    printf("noneOf: \t%d\n", noneOf(array, length, 5));
    printf("count of 1: \t%llu", count(array, length, 1));

    return 0;
}
