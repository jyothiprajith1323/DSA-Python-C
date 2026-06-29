#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char stack[100];
    int top = -1;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {
                printf("False\n");
                return 0;
            }

            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                printf("False\n");
                return 0;
            }
        }
    }

    if (top == -1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
