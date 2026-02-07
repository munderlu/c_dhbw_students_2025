#include <stdio.h>

void swap (int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int *array, int l, int r){
    int pivot = array[r];
    int i = l;
    for (int j = i; j <= r-1; j++){
        if (array[j] < pivot){
            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap(&array[r], &array[i]);
    return i;
}

void quickSort(int *array, int l, int r){
    if(l < r){
        int m = partition(array, l, r);
        quickSort(array, l, m-1);
        quickSort(array, m+1, r);
    }
}

int main (){
    int array [] = {4, 2, 5, 6, 4, 25, 3, 1, 13, 22, 7};
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, n -1);
    for(int i=0; i < n; i++) printf("%d\n", array[i]);
}