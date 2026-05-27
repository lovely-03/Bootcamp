#include<stdio.h>
void main()
{
    int r,c,i,j,maxSum=0,maxRow=0;
    printf("Enter rows and columns:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter matrix elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            sum = sum+arr[i][j];
        }
        if(sum>maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }
    for(i=maxRow;i<r-1;i++)
    {
        for(j=0;j<c;j++)
        {
            arr[i][j]=arr[i+1][j];
        }
    }
    r--;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
