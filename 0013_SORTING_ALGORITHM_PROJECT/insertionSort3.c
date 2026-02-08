#include <stdio.h>

void insertionSort (int *array, int n){
    for (int i = 1; i < n; i++){
        int key = array[i];
        int j = i-1;
        while (j >= 0 && array[j]> key){
            array[j +1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

int main (){
    int array [] = {4, 2, 5, 6, 4, 25, 3, 1, 13};
    int n = sizeof(array)/sizeof(array[0]);
    insertionSort(array, n);
    for(int i=0; i < n; i++) printf("%d\n", array[i]);
}