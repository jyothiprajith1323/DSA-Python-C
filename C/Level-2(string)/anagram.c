#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// For using bool type
#include <stdbool.h>  

// Function to compare two characters 
// (used for sorting)
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// Function to check if two strings 
// are anagrams
bool areAnagrams(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) return false;

    // Sort both strings
    qsort(s1, strlen(s1), sizeof(char), compare);
    qsort(s2, strlen(s2), sizeof(char), compare);

    // Compare sorted strings
    return strcmp(s1, s2) == 0;
}

int main() {
    
    char s1[] = "geeks";
    char s2[] = "kseeg";

    if (areAnagrams(s1, s2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}