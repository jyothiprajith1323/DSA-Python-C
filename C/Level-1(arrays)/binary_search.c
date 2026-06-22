#include<stdio.h>

int binary_search(int a[],int n, int key)
{
    int low = 0;
    int mid;
    int high = n-1;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(a[mid]==key)
        {
            return 0;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        
    }
    return -1;
}

int main()
{
    int a[100],n,key;
    scanf("%d%d",&n,&key);
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int val = binary_search(a,n,key);
    if(val == 0)
    {
        printf("Element is found");
    }
    else
    {
        printf("Element is not found");
    }

    return 0;
}