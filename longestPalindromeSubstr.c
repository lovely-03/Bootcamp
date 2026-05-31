#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int start = 0, maxlen = 1;
    int n, i;
    printf("Enter string: ");
    scanf("%s", str);
    n = strlen(str);
    for(i = 0; i < n; i++)
    {
        int left = i;
        int right = i;
        while(left >= 0 && right < n && str[left] == str[right])
        {
            if(right - left + 1 > maxlen)
            {
                start = left;
                maxlen = right - left + 1;
            }
            left--;
            right++;
        }
        left = i;
        right = i + 1;
        while(left >= 0 && right < n && str[left] == str[right])
        {
            if(right - left + 1 > maxlen)
            {
                start = left;
                maxlen = right - left + 1;
            }
            left--;
            right++;
        }
    }
    printf("Longest palindrome substring: ");
    for(i = start; i < start + maxlen; i++)
    {
        printf("%c", str[i]);
    }
}