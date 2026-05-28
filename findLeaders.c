#include<stdio.h>
void main()
{
    int n,i,maxFromRight;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    maxFromRight=arr[n-1];
    printf("Leaders: %d ", maxFromRight);
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>maxFromRight)
        {
            maxFromRight=arr[i];
            printf(" %d ",maxFromRight);
        }
    }
}