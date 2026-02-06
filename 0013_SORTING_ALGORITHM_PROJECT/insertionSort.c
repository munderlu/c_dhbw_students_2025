#include <stdio.h>

void quickSort (int* array, int length){
    for (int i = 1; i < length; i++){
        int j = i -1;
        int key = array[i];
        while (j >=0 && array[j]>key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main() {
    int data[] = {12, 11, 13, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);
    
    quickSort(data, n);
    
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    return 0;
}