#include <stdio.h>

// Hilfsfunktion zum Ausdrucken eines Arrays
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Hilfsfunktion zum Vertauschen zweier Elemente
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *array, int l, int r) {
    int pivot = array[r];
    int kleinste = l;
    for (int j = l; j < r; j++) {
        if (array[j] < pivot) {
            swap(&array[j], &array[kleinste]);
            kleinste++;
        }
    }
    swap(&array[kleinste], &array[r]);
    return kleinste;
}

void quickSort(int *array, int l, int r) {
    if (l < r) {
        int pivot = partition(array, l, r);
        quickSort(array, l, pivot - 1);
        quickSort(array, pivot + 1, r);
        printArray(array, r - l);
    }
}

// Hauptfunktion
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsortiertes Array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sortiertes Array: \n");
    printArray(arr, n);

    return 0;
}
