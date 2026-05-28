#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter size of matrix:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter matrix elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-j-1];
            arr[i][n-j-1]=temp;
        }
    }
    printf("After rotating 90 degrees:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}