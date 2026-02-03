#include <stdio.h>

void swap (int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify (int* array, int length, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i +2;
    if (left < length && array[left] > array[largest]){
        largest = left;
    }
    if (right < length && array[right] > array[largest]){
        largest = right;
    }
    if (largest != i){
        swap(&array[i], &array[largest]);
        heapify(array, length, largest);
    }
}

void heapSort (int* array, int length){
    for (int i = length / 2 -1; i>=0; i--){
        heapify(array, length, i);
    }

    for (int i = length-1; i>0; i--){
        swap(&array[0], &array[i]);
        heapify(array, i, 0);
    }
}

int main() {
    int data[] = {12, 11, 13, 5, 6, 7, 2, 3};
    int n = sizeof(data) / sizeof(data[0]);
    
    heapSort(data, n);
    
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    return 0;
}