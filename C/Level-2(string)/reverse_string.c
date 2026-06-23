#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int n;
    fgets(str, sizeof(str), stdin);
    printf("%s",str);
    n = strlen(str);
    for(int i = n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}