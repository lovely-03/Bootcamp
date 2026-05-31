#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int visited[100]={0};
    int left=0, maxlen=0;
    printf("Enter string:");
    scanf("%s", str);
    for(int right=0;right<strlen(str);right++)
    {
        while(visited[str[right]]==1)
        {
            visited[str[left]]=0;
            left++;
        }
        visited[str[right]]=1;
        int len = right-left+1;
        if(len>maxlen)
        {
            maxlen=len;
        }
    }
    printf("Longest substring without repeating characters length: %d", maxlen);
}