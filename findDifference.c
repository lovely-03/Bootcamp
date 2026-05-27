#include<stdio.h>
void main()
{
    int n,i,diff;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    diff = arr[0]-arr[n-1];
    printf("Difference= %d",diff);
}