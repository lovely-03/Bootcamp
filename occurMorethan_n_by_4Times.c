#include<stdio.h>
void main()
{
    int n,i,j,count=1;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            if(count>(n/4))
            {
                printf("%d ", arr[i-1]);
            }
            count=1;
        }
    }
    if(count>(n/4))
    {
        printf("%d ",arr[n-1]);
    }
}