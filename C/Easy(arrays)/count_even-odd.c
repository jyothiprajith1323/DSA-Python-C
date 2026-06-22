#include<stdio.h>
void main()
{
    int a[100],n,odd = 0 ,even = 0;
    int odd_no[100],even_no[100];
    scanf("%d",&n);
    for(int i = 0 ; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]%2 == 0)
        {
            odd +=1;
            odd_no[odd-1]=a[i];
        }
        else
        {
            even +=1;
            even_no[even-1]=a[i];
        }
    }
    printf("odd = %d , even = %d\n",odd,even);
    printf("odd numbers : ");
    for(int i = 0 ; i<odd ;i++)
    {
        printf("%d ",odd_no[i]);
    }
    printf("\n");
    printf("even numbers : ");
    for(int i = 0 ; i<even ;i++)
    {
        printf("%d ",even_no[i]);
    }
}