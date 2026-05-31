#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char name[100], id[100];
    char first[30], last[30];
    printf("Enter full name:");
    gets(name);
    printf("Enter id:");
    scanf("%s", id);
    name[strcspn(name, "\n")] = '\0';
    sscanf(name, "%s", first);
    char *token = strtok(name, " ");
    while(token != NULL)
    {
        strcpy(last, token);
        token = strtok(NULL, " ");
    }
    for(int i=0; first[i];i++)
    {
        first[i] = tolower(first[i]);
    }
    for(int i=0; last[i];i++)
    {
        last[i] = tolower(last[i]);
    }
    printf("%s_%s%s", first, last, id);
}
