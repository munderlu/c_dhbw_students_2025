#include <stdio.h>

void swap (int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition (int *array, int l, int r){
    int pivot = array[r];
    int i=l;
    for(int j = i; j < r; j++){
        if(array[j] < pivot){
            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap (&array[i], &array[r]);
    return i;
}

void quickSort (int *array, int l, int r){
    if (l < r){
        int pi = partition(array, l, r);
        quickSort(array, l, pi-1);
        quickSort(array, pi+1, r);
    }
}

int main (){
    int array [] = {4, 2, 5, 6, 4, 25, 3, 1, 13};
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, n);
    for(int i=0; i < n; i++) printf("%d\n", array[i]);
}