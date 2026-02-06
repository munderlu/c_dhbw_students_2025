#include <stdio.h>

void swap (int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low; // Index des kleineren Elements

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return (i);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int data[] = {12, 11, 13, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);
    
    quickSort(data, 0, n-1);
    
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    return 0;
}