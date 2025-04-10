#include <stdio.h>
#include <string.h>

void compressString(char *str, char *compressed) {
    int len = strlen(str);
    int i = 0, j = 0;

    while (i < len) {
        char current = str[i];
        int count = 1;

        // Count how many times the same character repeats
        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        compressed[j++] = current;

        if (count > 1) {
            // Only write the count if it's more than 1
            j += sprintf(&compressed[j], "%d", count);
        }

        i++;
    }

    compressed[j] = '\0'; // Null-terminate the string
}
