#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str[100];
    int i,len;
    printf("Enter string:");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!= str[len-i-1])
        {
            printf("%s is not Palindrome",str);
            exit(0);
        }
    }
    printf("%s is Palindrome", str);
}