#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    char stack[100];
    int top = -1;
    int i;
    printf("Enter string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            stack[++top] = str[i];
        }
        else
        {
            if(top == -1)
            {
                printf("Invalid");
                return;
            }

            if((str[i]==')' && stack[top]=='(') ||
               (str[i]=='}' && stack[top]=='{') ||
               (str[i]==']' && stack[top]=='['))
            {
                top--;
            }
            else
            {
                printf("Invalid");
                return;
            }
        }
    }
    if(top == -1)
        printf("Valid");
    else
        printf("Invalid");
}
