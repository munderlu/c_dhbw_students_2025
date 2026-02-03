#include <stdio.h>

void heapSort (int* array, int length){
    for (int i=0; i < length; i++){
        for(int j = 0; j< length-i-1; j++){
            if(array[j]>array[j+1]){
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1]= tmp;
            }
        }
    }
}

int main() {
    int data[] = {12, 11, 13, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);
    
    heapSort(data, n);
    
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    return 0;
}