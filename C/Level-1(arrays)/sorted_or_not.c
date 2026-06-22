#include<stdio.h>
int main()
{
    int a[100],sorted,n;
    sorted = 0;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i-1] < a[i])
        {
            sorted += 1;
        }
    }
    if(sorted != n-1)
    {
        printf("Not Sorted");
    }
    else
    {
        printf("Sorted");
    }
    return 0;
}