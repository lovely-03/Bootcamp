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
    int top=0, bottom=r-1;
    int left=0, right=c-1;
    printf("Spiral traversal:\n");
    while(top<=bottom && left<=right)
    {
        for(j=left;j<=right;j++)
        {
            printf("%d ", arr[top][j]);
        }
        top++;
        for(i=top;i<=bottom;i++)
        {
            printf("%d ",arr[i][right]);
        }
        right--;
        if(top<=bottom)
        {
            for(j=right;j>=left;j--)
            {
                printf("%d ",arr[bottom][j]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(i=bottom;i>=top;i--)
            {
                printf("%d ",arr[i][left]);
            }
            left++;
        }
    }
}