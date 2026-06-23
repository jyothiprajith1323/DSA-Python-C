#include<stdio.h>
#include<string.h>

int ispalindrome(char str[])
{
    int n = strlen(str);
    char str_2[100];
    for (int i = 0; i < n; i++)
    {
        str_2[i] = str[n - 1 - i];
    }
    str_2[n] = '\0';

    return strcmp(str, str_2) == 0;
}

int main()
{
    char str[100];
    scanf("%99s", str);
    int val = ispalindrome(str);
    if (val)
    {
        printf("is a palindrome");
    }
    else
    {
        printf("not a palindrome");
    }

    return 0;
}