#include<stdio.h>
void main()
{
    char str[100];
    int i, j=0;
    char result[100];
    printf("Enter string:");
    gets(str);
    for(i=0; str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            continue;
        }
        else
        {
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';
    printf("%s", result);
}