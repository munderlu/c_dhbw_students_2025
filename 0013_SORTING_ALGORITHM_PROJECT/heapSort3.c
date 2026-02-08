#include <stdio.h>

void swap (int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify (int *array, int n, int i){
    int largest = i;
    int child1 = 2*i +1;
    int child2 = 2*i +2;

    if(child1 < n && array[largest] < array[child1]) largest = child1;
    if(child2 < n && array[largest] < array[child2]) largest = child2;

    if (largest != i){
        swap(&array[largest], &array[i]);
        heapify(array, n, largest);
    }
}

void heapSort (int *array, int n){
    for (int i = n/2-1; i >=0; i--){
        heapify(array, n, i);
    }

    for (int i = n-1; i >=0; i--){
        swap (&array[0], &array[i]);
        heapify(array, i, 0);
    }
}

int main (){
    int array [] = {4, 2, 5, 6, 4, 25, 3, 1, 13};
    int n = sizeof(array)/sizeof(array[0]);
    heapSort(array, n);
    for(int i=0; i < n; i++) printf("%d\n", array[i]);
}