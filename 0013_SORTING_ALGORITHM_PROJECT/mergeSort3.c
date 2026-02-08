#include <stdio.h>
#include <stdlib.h>

void merge (int *array, int l, int m, int r){
    int n1 = m -l +1;
    int n2 = r-m;

    int *L = (int*)malloc(sizeof(int)*n1);
    int *R = (int*)malloc(sizeof(int)*n2);
    for(int i = 0; i < n1; i++) L[i] = array[l+i];
    for(int i = 0; i < n2; i++) R[i] = array[m+i+1];

    int i = 0, j = 0, k = l;

    while(i < n1 && j<n2){
        if (L[i] < R[j]){
            array[k] = L[i];
            i++;
        }else{
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i <n1) array[k++] = L[i++];
    while (j <n2) array[k++] = R[j++];

    free(L); free(R);
}

void mergeSort (int *array, int l, int r){
    if (l < r){
        int m = (l+r)/2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }
}

int main (){
    int array [] = {4, 2, 5, 36, 6, 4, 33, 25, 3, 1, 13};
    int n = sizeof(array)/sizeof(array[0]);
    mergeSort(array, 0, n-1);
    for(int i=0; i < n; i++) printf("%d\n", array[i]);
}