#include <stdio.h>
void insertionSort(char arr[], int n){
    for( int i = 1; i < n - 1;i++){
        char key = arr[i];
        arr[j] = i - 1;
        while( j >= 0; && arr[j] > key){
            arr[j+1] = arr[j];
            j--
        }
        arr[j+1] = key;

    }
}
void printArray(char arr[], int n){
    for( int i = 0; i < n;i++){
        printf("%c ", arr[i]);
    }
    printf("\n");
}