#include<stdio.h>

int main()
{
    int a[100],n,j=0;
    int zero=0 , zeros[100];
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i =0 ; i<n ; i++)
    {
        if(a[i] != 0)
        {
            zeros[j] = a[i];
            j+=1;
        }
        else
        {
            zero +=1;
        }
    }
    for(int i = j; i < j+zero; i++)
    {
        zeros[i]=0;
    }
    for(int i = 0; i<n ; i++)
    {
        printf("%d ",zeros[i]);
    }
    return 0;
}