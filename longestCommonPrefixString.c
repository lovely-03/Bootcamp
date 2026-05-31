#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j;
    char s[10][100], prefix[100];
    printf("Enter number of strings:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter string:");
        scanf("%s", &s[i]);
    }
    strcpy(prefix, s[0]);
    for(i=1;i<n;i++)
    {
        j=0;
        while(prefix[j] && s[i][j] && prefix[j]==s[i][j])
        {
            j++;
        }
        prefix[j]='\0';
        if(prefix[0]=='\0')
        {
            break;
        }
    }
    if(prefix[0]=='\0')
    {
        printf("No common prefix");
    }
    else
    {
        printf("Longest common pefix: %s", prefix);
    }
}