#include <stdio.h>

int main()
{
    int aValue = 42;
    int* myPointer = &aValue;

    printf("Initial value:\t\t\t\t\t%d\n", aValue);
    printf("Value through pointer:\t\t\t\t%d\n", *myPointer);

    *myPointer = 20;

    printf("Modified value of aValue through myPointer:\t%d\n\n", aValue);

    int *yourPointer = myPointer;

    printf("Address of aValue:\t%p\n", &aValue);
    printf("Address of myPointer:\t%p\n", &myPointer);
    printf("Address of yourPointer:\t%p\n", &yourPointer);


    return 0;
}