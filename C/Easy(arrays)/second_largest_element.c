#include<stdio.h>

void main()
{
    int a[100],n,max,max_2;
    scanf("%d",&n);
    for(int i = 0 ; i < n ;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    max_2 = a[0];
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        for(int j = 0 ; j< i-1 ; j++)
            {
                if(a[j]<max)
                {
                    max_2 = a[j];
                }
            }
    }
    printf("max = %d\n",max);
    printf("max_2 = %d",max_2);
}