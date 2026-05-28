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
    printf("After rotation:\n");
    for(i=r-1;i>=0;i--)
    {
        for(j=c-1;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}