#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix among strings
void longestCommonPrefix(char arr[][100], int n, char *result) {
    if (n == 0) { // No strings
        result[0] = '\0';
        return;
    }

    // Start with the first string as the prefix
    strcpy(result, arr[0]);

    // Compare with each string in the array
    for (int i = 1; i < n; i++) {
        int j = 0;
        while (result[j] && arr[i][j] && result[j] == arr[i][j]) {
            j++;
        }
        result[j] = '\0'; // Truncate to the matched prefix

        // If prefix becomes empty, no need to check further
        if (result[0] == '\0') {
            break;
        }
    }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n == 0) {
        printf("No strings entered.\n");
        return 0;
    }

    char arr[n][100]; // Array to store strings (max length 99 chars)
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%99s", arr[i]); // Prevent buffer overflow
    }

    char prefix[100];
    longestCommonPrefix(arr, n, prefix);

    if (prefix[0] == '\0') {
        printf("No common prefix found.\n");
    } else {
        printf("Longest Common Prefix: %s\n", prefix);
    }

    return 0;
}
