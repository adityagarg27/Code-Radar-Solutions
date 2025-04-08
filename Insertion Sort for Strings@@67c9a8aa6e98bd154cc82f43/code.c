#include <stdio.h>
void insertionSort(char *arr[], int n){
    for( int i = 1; i < n;i++){
        char *key = arr[i];
        int j = i - 1;
        while( j >= 0 && strcmp(arr[j], key) > 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void printArray(char *arr[], int n){
    for( int i = 0; i < n;i++){
        printf("%s ", arr[i]);
    }
    printf("\n");
    
}