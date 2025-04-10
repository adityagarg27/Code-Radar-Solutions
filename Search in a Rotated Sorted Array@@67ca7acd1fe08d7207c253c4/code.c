// #include <stdio.h>
// int searchInRotatedArray(int n, int target, int arr[]){
//     int left = 0; int right = n - 1;
//     while (left <= right){
//         int mid = left +(right - left)/2;
//         if(arr[mid] == target)
//         return mid;
//         if (arr[left] <= arr[mid]){
//             if(target >= arr[left] && target < arr[mid])
//             right = mid - 1;
//             else
//             left = mid + 1;
//         }
//         else{
//             if(target >= arr[mid] && target <= arr[right])
//             left = mid + 1;
//             else
//             right = mid - 1;
//         }
//     }
//     return -1;
// }
#include <stdio.h>

int searchInRotatedArray(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;

        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (target >= arr[low] && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else {
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1; // Not found
}
