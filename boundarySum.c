#include<stdio.h>
void main()
{
    int r,c,i,j;
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
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("sum = %d",sum);
}