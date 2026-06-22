#include <stdio.h>

int main(void)
{
    int a[100];
    int unique[100];
    int n;
    int unique_count = 0;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int value = a[i];
        int found = 0;

        for (int j = 0; j < unique_count; j++) {
            if (unique[j] == value) {
                found = 1;
                break;
            }
        }

        if (!found) {
            unique[unique_count++] = value;
        }
    }

    printf("[");
    for (int i = 0; i < unique_count; i++) {
        printf("%d", unique[i]);
        if (i < unique_count - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}
