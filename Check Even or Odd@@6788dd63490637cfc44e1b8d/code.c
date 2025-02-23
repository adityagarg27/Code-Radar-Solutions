#include <stdio.h>

int main() {
    int num, count, i;

    // Ask the user how many numbers they want to check
    printf("How many numbers do you want to check? ");
    scanf("%d", &count);

    // Loop through each number
    for(i = 1; i <= count; i++) {
        // Prompt user for a number
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Check if the number is even or odd
        if(num % 2 == 0) {
            printf("%d is Even\n", num);
        } else {
            printf("%d is Odd\n", num);
        }
    }

    return 0;
}