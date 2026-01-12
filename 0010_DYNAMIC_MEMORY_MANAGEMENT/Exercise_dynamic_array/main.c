#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int length;
    // ask for the length of the array that should be stored on the heap
    printf("Enter the length of the array: ");
    scanf("%d", &length);
    // test for positive integers
    if (length < 0){
        printf("Invalid input! The number of elements must be greater than zero.\n");
        return 0;
    }

    // create the heapPointer and test for NULL pointer
    int *heapArray = (int*)malloc(sizeof(int) * (size_t)length);
    if (heapArray == NULL){
        printf("Memory allocation failed!\n");
        return 0;
    }

    // ask for user input and calculate sum
    int sum = 0;
    printf("Enter %d integers:\n", length);
    for (int i = 0; i < length; i++){
        scanf("%d", &heapArray[i]);
        sum += heapArray[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    
    free(heapArray);
    heapArray = NULL;

    return 0;
}
