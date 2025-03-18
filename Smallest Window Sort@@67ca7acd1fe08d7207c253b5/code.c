#include <stdio.h>
#include <stdlib.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) { // If any element is greater than the next one, array is not sorted
            return 0;
        }
    }
    return 1;
}

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // Ascending order sorting
}


