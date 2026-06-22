#include<stdio.h>

int main()
{
    int a[100],n,count;
    count = 0;
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i<n ; i++)
    {
        count +=1;
        if(count != a[i])
        {
            printf("%d \n",count);
            break;
        }
    }
    return 0;
}