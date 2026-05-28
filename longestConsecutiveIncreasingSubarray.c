#include<stdio.h>
void main()
{
    int n,i, maxlen=1, len=1, start=0, maxStart=0;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]==(arr[i-1]+1))
        {
            len++;
        }
        else
        {
            len=1;
            start=i;
        }
        if(len>maxlen)
        {
            maxlen=len;
            maxStart=start;
        }
    }
    for(i=maxStart;i<(maxStart+maxlen);i++)
    {
        printf("%d ",arr[i]);
    }
    printf("Length: %d",maxlen);
}