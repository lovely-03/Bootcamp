#include<stdio.h>
void main()
{
    int n,i,l=0,mid=0;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n],r=n-1;
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    while(mid<=r)
    {
        if(arr[mid]==0)
        {
            int temp=arr[l];
            arr[l]=arr[mid];
            arr[mid]=temp;
            l++;mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp=arr[mid];
            arr[mid]=arr[r];
            arr[r]=temp;
            r--;
        }
    }
    printf("Array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}