#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    int freq[256]={0};
    printf("Enter string1:");
    scanf("%s",&s1);
    printf("Enter string2:");
    scanf("%s",&s2);
    if(strlen(s1)!=strlen(s2))
    {
        printf("Not anagram");
        return 0;
    }
    for(int i=0;s1[i]!='\0';i++)
    {
        freq[s1[i]]++;
        freq[s2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            printf("Not an anagram");
            return 0;
        }
    }
    printf("It is an anagram");
    return 0;
}