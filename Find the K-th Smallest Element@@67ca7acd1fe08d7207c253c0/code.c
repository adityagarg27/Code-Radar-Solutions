#include <stdio.h>
void bubbleSort(int arr[], int n){
    int temp;
    for(int i = 0; i < n - 1;i++){
        for(int j = 0; i < n - i - 1;j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void kthSmallest(int arr[], int n, int k){
    bubbleSort(arr,n);
    for(int i = 0; i < n;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    if(k >= 1 && k <= n){
        printf("%d", arr[k-1]);
        else
        printf("return - 1");
    }

}