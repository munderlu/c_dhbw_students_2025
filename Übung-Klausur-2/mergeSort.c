#include <stdio.h>
#include <stdlib.h>

// Hilfsfunktion zum Zusammenführen der zwei sortierten Hälften arr[l..m] und arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Temporäre Arrays erstellen
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    // Daten in temporäre Arrays kopieren
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Temporäre Arrays zusammenführen
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Restliche Elemente von L[] kopieren, falls vorhanden
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Restliche Elemente von R[] kopieren, falls vorhanden
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Speicher der temporären Arrays freigeben
    free(L);
    free(R);
}

// Rekursive Funktion zur Durchführung von Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        // Erste und zweite Hälfte sortieren
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
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

