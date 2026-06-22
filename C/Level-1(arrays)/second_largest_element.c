#include<stdio.h>

int main()
{
    int a[100], n;
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two numbers\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int max_2 = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max_2 = max;
            max = a[i];
        }
        else if (a[i] > max_2 && a[i] != max)
        {
            max_2 = a[i];
        }
    }

    if (max_2 == max)
    {
        printf("max = %d\n", max);
        printf("There is no second distinct maximum\n");
    }
    else
    {
        printf("max = %d\n", max);
        printf("max_2 = %d\n", max_2);
    }

    return 0;
}