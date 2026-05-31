#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf("%s",&str);
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]==1)
        {
            printf("%c",str[i]);
            return 0;
        }
    }
    printf("No non-repeating character");
    return 0;
}