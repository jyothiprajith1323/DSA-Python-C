#include<stdio.h>

void main()
{
    int a[100],n,max;
    scanf("%d",&n);
    for(int i = 0 ; i < n ;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("The largest element is %d",max);
}