#include <stdio.h>
#include <stdlib.h>

void merge(int *array, int l, int m, int r) {
    int n1 = (m - l) + 1;
    int n2 = (r - m);
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    int i = 0, j = 0, k = 0;
    for (i = 0; i < n1; i++) {
        L[i] = array[l + i];
    }

    for (i = 0; i < n2; i++) {
        R[i] = array[m + 1 + i];
        k++;
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }

    free(R);
    free(L);
}

void mergeSort(int *array, int l, int r) {
    if (l < r) {
        int m = (r + l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);

        merge(array, l, m, r);
    }
}

// Hilfsfunktion zum Drucken des Arrays
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Ursprungsarray: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSortiertes Array: \n");
    printArray(arr, arr_size);
    return 0;
}
