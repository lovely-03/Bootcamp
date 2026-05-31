#include<stdio.h>
#include<string.h>
void main()
{
    char str[100], pattern[20];
    char ch;
    printf("Enter string:");
    scanf("%s", &str);
    printf("Enter pattern:");
    scanf("%s", &pattern);
    printf("Enter replacement char:");
    scanf(" %c",&ch);
    int i=0;
    int len= strlen(pattern);
    while(str[i]!='\0')
    {
        if(strncmp(&str[i], pattern, len)==0)
        {
            printf("%c", ch);
            i+=len;
        }
        else
        {
            printf("%c", str[i]);
            i++;
        }
    }
}
