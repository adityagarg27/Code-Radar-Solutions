#include <stdio.h>
#include <string.h>

void bubbleSort(arr[][100], int n){
    for(int i = 0; i = n - 1;i++){
        
        for(int j = 0; i = n - i - 1;j++){
            if(strcpy(arr[j], arr[j + 1]) > 0){
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[j], arr[j + 1]);
            strcpy(arr[j + 1], temp);
            }
    }
}
}
void printArray(arr[][100], int n){
    for (int i = 0; i < n;i++){
        printf("%s",arr[i]);
    }
}