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

void insertionSort(int* array, int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(array[j] < array[j-1]){
                swap(array, j, j-1);
            }else{
                break;
            }
        }
        printArray(array, n);
    }
}

int main(){
    int array[] = {7, 6, 5, 4, 3, 2};
    insertionSort(array, 6);
}
