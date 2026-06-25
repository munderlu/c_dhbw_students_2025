#include <stdio.h>

// Hilfsfunktion zum Ausdrucken eines Arrays
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Hilfsfunktion zum Vertauschen zweier Elemente
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Partitioniert das Array: Elemente kleiner als das Pivot kommen nach links, größere nach rechts
int partition(int arr[], int low, int high) {
    int pivot = arr[high];    // Pivotelement
    int i = (low - 1);        // Index des kleineren Elements

    for (int j = low; j <= high - 1; j++) {
        // Wenn das aktuelle Element kleiner oder gleich dem Pivot ist
        if (arr[j] <= pivot) {
            i++;    // Index des kleineren Elements erhöhen
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Die eigentliche Quicksort-Funktion
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi ist der Partitionierungsindex, arr[p] ist jetzt an der richtigen Position
        int pi = partition(arr, low, high);

        // Die Teillisten vor und nach dem Partitionierungsindex rekursiv sortieren
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
        printArray(arr, high-low);
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

