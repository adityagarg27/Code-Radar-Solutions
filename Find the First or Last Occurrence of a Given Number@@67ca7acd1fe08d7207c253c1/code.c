#include <stdio.h>
int findOccurrence(int arr[], int n, int target, char mode){
int low = 0, high = n - 1, result = -1;
while (low <= high){
    int mid = (low+high)/2;
    if (arr[mid] == target){
        result = mid;
        if (mode == 'F'){
            high = mid - 1;
        }
        else if(mode == 'L'){
            low = mid + 1;
        }
    }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
        
    

}
return result;

}