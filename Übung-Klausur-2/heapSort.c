#include <stdio.h>

void swap(int *array, int i, int j) {
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

void printArray(int *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void heapify(int *array, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && array[left] > array[largest])
        largest = left;

    if (right < n && array[right] > array[largest])
        largest = right;

    if (largest != i) {
        swap(array, i, largest);

        heapify(array, n, largest);
    }
}

void heapSort(int *array, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(array, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(array, 0, i);

        heapify(array, i, 0);
        printArray(array, n);
    }
}

int main() {
    int array[] = {7, 6, 5, 4, 3, 2};
    heapSort(array, 6);
}
