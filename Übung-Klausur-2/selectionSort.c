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

void selectionSort(int *array, int n) {
  for (int i = 0; i < n; i++) {
    int min_idx = i;
    for (int j = i; j < n; j++) {
      if (array[j] < array[min_idx]) {
        min_idx = j;
      }
    }
    swap(array, i, min_idx);
    printArray(array, n);
  }
}

int main() {
  int array[] = {7, 6, 5, 4, 3, 2};
  selectionSort(array, 6);
}
