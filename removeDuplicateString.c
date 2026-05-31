#include<stdio.h>
void main()
{
    char str[100], result[100];
    printf("Enter string:");
    scanf("%s",&str);
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]==1)
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j]='\0';
    printf("%s", result);
}