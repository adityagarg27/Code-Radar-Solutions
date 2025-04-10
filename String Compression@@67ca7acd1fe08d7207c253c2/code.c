void compressString(char *str, char *compressed) {
    int len = strlen(str);
    int i = 0, j = 0;

    while (i < len) {
        char current = str[i];
        int count = 1;

        // Count duplicates
        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        compressed[j++] = current;
        // Convert count to string and copy it
        j += sprintf(&compressed[j], "%d", count);

        i++;
    }

    compressed[j] = '\0'; // Null-terminate the result
}
