#include <stdio.h>
#include <limits.h>

void findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Step 1: Find first out-of-order element from the left
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }
    
    // If array is already sorted
    if (left == n - 1) {
        printf("The array is already sorted.\n");
        return;
    }

    // Step 2: Find first out-of-order element from the right
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Step 3: Find min and max in the subarray arr[left...right]
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = left; i <= right; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Step 4: Expand left boundary
    while (left > 0 && arr[left - 1] > minVal) {
        left--;
    }

    // Step 4: Expand right boundary
    while (right < n - 1 && arr[right + 1] < maxVal) {
        right++;
    }

    // Step 5: Print result
    printf("The smallest subarray that needs sorting is from index %d to %d\n", left, right);
    printf("Subarray Length: %d\n", right - left + 1);
}


