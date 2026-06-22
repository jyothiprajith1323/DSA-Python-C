#include<stdio.h>

int linear_search(int a[] , int n , int key )
{
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i] == key)
        {
            return 0;
        }
    }
    return -1;
}

int main()
{
    int a[100],n,key;
    scanf("%d%d",&n,&key);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int val = linear_search(a,n,key);
    if(val == 0)
    {
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
    return 0 ;
}