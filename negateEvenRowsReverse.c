//Negate even rows then reverse columns in a matrix.
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
            if(i%2==0)
            {
                arr[i][j]=(-1)*arr[i][j];
            }
        }
    }
    for(i=0;i<r/2;i++)
    {
        for(j=0;j<c;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[r-i-1][j];
            arr[r-i-1][j]=temp;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}