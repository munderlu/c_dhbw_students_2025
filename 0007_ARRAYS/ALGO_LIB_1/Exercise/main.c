#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "lib.h"

int main()
{
    int32_t array[] = {5, 3, 5};
    size_t length = 3;

    printf("allOf: \t\t%d\n", allOf(array, length, 5));
    printf("anyOf: \t\t%d\n", anyOf(array, length, 3));
    printf("noneOf: \t%d\n", noneOf(array, length, 1));
    printf("count of 5: \t%llu\n", count(array, length, 5));

    return 0;
}
