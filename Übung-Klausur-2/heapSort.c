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
    int lchild = 2 * i + 1;
    int rchild = 2 * i + 2;
    int largest = i;
    if (lchild < n && array[lchild] > array[largest]) {
        largest = lchild;
    }
    if (rchild < n && array[rchild] > array[largest]) {
        largest = rchild;
    }
    swap(array, i, largest);
    if (largest != i) {
        heapify(array, n, largest);
    }
}

void heapSort(int *array, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(array, n, i);
    }
    int i = 0;
    while (i < n) {
        swap(array, 0, n - i - 1);
        heapify(array, n - i - 1, 0);
        i++;
    }
}

int main() {
    int array[] = {77, 5, 66, 100, 2, 78};
    printArray(array, 6);
    heapSort(array, 6);
    printArray(array, 6);
}
