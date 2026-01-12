#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t length = 3;
    size_t memoryReq = length * sizeof(int);

    printf("address of length: %p\n", (void*)&length);
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("memoryReq: %ld\n", memoryReq);

    int *heapArray = (int*)malloc(memoryReq);

    for (size_t i = 0; i < length; i++){
        heapArray[i] = (int)i * 100;
    }

    for (size_t i = 0; i < length; i++){
        printf("heapArray[%ld] = %d\n", i, heapArray[i]);
        printf("address of heapArray[%ld] = %p\n", i, (void*)&heapArray[i]);
    }

    free(heapArray);
    heapArray = NULL; // = (void*)0 sonst haben wir einen dangling pointer

    return 0;
}