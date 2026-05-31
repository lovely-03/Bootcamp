#include<stdio.h>
void main()
{
    char str[100];
    int i, count=1;
    printf("Enter String:");
    scanf("%s", &str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d",str[i],count);
            count=1;
        }
    }
}