#include <stdio.h>

void swap(int* array, int i, int j){
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

void printArray(int* array, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int* array, int n){
    for (int i = n- 1; i > 0; i--) {
        for (int j = 0;j < i;j++) {
            if (array[j] > array[j +1]){
                swap(array, j, j+1);
            }
        }
        printArray(array, n);
    }
}

int main(){
    int array[] = {3, 2, 5, 6, 7, 1};
    bubbleSort(array, 6);
}
