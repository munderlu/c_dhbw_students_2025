#include <stdio.h>

void swap (int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort (int *array, int n){
    for(int i = n; i >=0; i--){
        for(int j = 0; j <i -1; j++){
            if (array[j] > array[j+1]) swap(&array[j], &array[j+1]);
        }
    }
}

int main (){
    int array [] = {4, 2, 5, 6, 4, 25, 3, 1, 13};
    int n = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, n);
    for(int i=0; i < n; i++) printf("%d\n", array[i]);
}