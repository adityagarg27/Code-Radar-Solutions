#include <stdio.h>

void rotateRight(int arr[], int n, int d) {
    d %= n;  // Reduce unnecessary rotations

    int temp[d];

    // Step 1: Copy last d elements into temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Step 2: Shift the remaining elements to the right
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    // Step 3: Copy temp elements to the beginning
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    // printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    // printf("\n");
}

int main() {
    int n, d;

    // printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);

    rotateRight(arr, n, d);
    printArray(arr, n);

    return 0;
}
