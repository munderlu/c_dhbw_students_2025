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

void heapSort(int *array, int n) {}

void heapify(int *array) {}

int main() {
  int array[] = {7, 6, 5, 4, 3, 2};
  heapSort(array, 6);
}
