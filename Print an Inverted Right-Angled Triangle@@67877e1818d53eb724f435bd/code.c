#include <stdio.h>

int main() {
    int n;

    // Prompt user for input
    
    scanf("%d", &n);

    // Loop to print an inverted right-angled triangle
    for (int i = n; i > 0; i--) {  // Controls the number of rows
        for (int j = 0; j < i; j++) {  // Prints '*' decreasing each row
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
