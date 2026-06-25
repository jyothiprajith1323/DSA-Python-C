#include <stdio.h>
#include <string.h>

char first_non_repeating_character(const char str[]) {
    int freq[256] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char letter = first_non_repeating_character(str);
    if (letter != '\0') {
        printf("The first non-repeating character is %c\n", letter);
    } else {
        printf("No non-repeating character\n");
    }

    return 0;
}