#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n],prefix[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    prefix[0]=0;
    for(i=1;i<=n;i++) //1-based indexing
    {
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    int l,r;
    printf("Enter l and r:");
    scanf("%d%d",&l,&r);
    int sum= prefix[r]-prefix[l-1];
    printf("Sum = %d",sum);
}