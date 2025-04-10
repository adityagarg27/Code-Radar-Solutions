#include <stdio.h>
void bubbleSort(int arr[], int n){
    int temp;
    for(int i = 1; i < n - 1;i++){
        for(int j = 1; i < n - i - 1;j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void kthSmallest(int arr[], int n, int k){
    bubblesort(arr,n);
    return arr[k-1];

}