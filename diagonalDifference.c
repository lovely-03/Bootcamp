#include<stdio.h>
void main()
{
    int n,i,j, pri_diag=0, sec_diag=0;
    printf("Enter size:");
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
        pri_diag += arr[i][i];
        sec_diag += arr[i][n-i-1];
    }
    int diff= pri_diag-sec_diag;
    printf("Difference: %d", diff);
}