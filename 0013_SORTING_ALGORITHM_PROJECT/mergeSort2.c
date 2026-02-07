#include <stdio.h>
#include <stdlib.h>

void merge(int *array, int l, int m, int r){
    int n1 = m -l +1;
    int n2 = r -m;

    int* R = (int*)malloc(sizeof(int)*n1);
    int *L = (int*)malloc(sizeof(int)*n2);
    for(int i = 0; i < n1; i++) R[i] = array[l+i];
    for(int i = 0; i < n2; i++) L[i] = array[m+i+1];

    int i= 0, j=0, k=l;
    while(i < n1 && j<n2){
        if(R[i] >= L[j]){
            array[k] = L[j];
            j++;
        }else{
            array[k] = R[i];
            i++;
        }
        k++;
    }

    while(i < n1) array[k++] = R[i++];
    while(j < n2) array[k++] = L[j++];
    
    free(L);
    free(R);
}

void mergeSort(int *array, int l, int r){
    if (l < r){
        int m = (l +r) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m ,r);
    }
}

int main() {
    int data[] = {12, 11, 13, 5, 3, 226, 35, 2, 1};
    int n = sizeof(data) / sizeof(data[0]);
    
    mergeSort(data, 0, n-1);
    
    for (int i = 0; i < n; i++) printf("%d ", data[i]);
    return 0;
}