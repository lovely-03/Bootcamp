#include<stdio.h>
#include<string.h>
void sort(char s[])
{
    int i,j;
    char temp;
    for(i=0; s[i]!='\0'; i++)
    {
        for(j=i+1; s[j]!='\0'; j++)
        {
            if(s[i] > s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
void main()
{
    char str[10][20];
    char sorted[10][20];
    int n,i,j;
    int visited[10]={0};
    printf("Enter number of strings: ");
    scanf("%d",&n);
    printf("Enter strings:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        strcpy(sorted[i],str[i]);
        sort(sorted[i]);
    }
    printf("Grouped anagrams:\n");
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
            continue;
        printf("%s ",str[i]);
        visited[i]=1;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(sorted[i],sorted[j])==0)
            {
                printf("%s ",str[j]);
                visited[j]=1;
            }
        }
        printf("\n");
    }
}