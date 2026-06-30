#include <stdio.h>
#include <string.h>

// Helper function to reverse characters between two pointers
void reverseString(char* start, char* end) {
    char temp;
    while (start < end) {
        // Swap the characters
        temp = *start;
        *start = *end;
        *end = temp;
        
        // Move pointers toward the center
        start++;
        end--;
    }
}

// Function to reverse the words in a sentence
void reverseWords(char* s) {
    if (s == NULL || *s == '\0') return;

    // Step 1: Reverse the entire string
    int len = strlen(s);
    reverseString(s, s + len - 1);

    // Step 2: Reverse each individual word
    char* word_start = s;
    char* temp = s;

    while (*temp) {
        temp++; // Move through the string one character at a time
        
        if (*temp == '\0') {
            // We reached the end of the string; reverse the last word
            reverseString(word_start, temp - 1);
        } else if (*temp == ' ') {
            // We hit a space; reverse the word we just passed
            reverseString(word_start, temp - 1);
            
            // Set the start of the next word to the character after the space
            word_start = temp + 1;
        }
    }
}

int main() {
    // Note: We use a char array instead of a char pointer (char *s = "...") 
    // because string literals are read-only in C and would cause a segmentation fault.
    char sentence[] = "programming in C is fun";
    
    printf("Original : %s\n", sentence);
    
    reverseWords(sentence);
    
    printf("Reversed : %s\n", sentence);
    
    return 0;
}
