#include<stdio.h>
#include<string.h>
#include<limits.h>

void main()
{
    char s[100], t[100];
    int need[256]={0};
    int have[256]={0};

    printf("Enter string: ");
    scanf("%s", s);

    printf("Enter pattern: ");
    scanf("%s", t);

    int required = strlen(t);

    for(int i=0; t[i]!='\0'; i++)
    {
        need[t[i]]++;
    }

    int left=0;
    int count=0;
    int minlen=INT_MAX;
    int start=0;

    for(int right=0; s[right]!='\0'; right++)
    {
        have[s[right]]++;

        if(need[s[right]]>0 &&
           have[s[right]]<=need[s[right]])
        {
            count++;
        }

        while(count==required)
        {
            int len = right-left+1;

            if(len<minlen)
            {
                minlen=len;
                start=left;
            }

            have[s[left]]--;

            if(need[s[left]]>0 &&
               have[s[left]]<need[s[left]])
            {
                count--;
            }

            left++;
        }
    }

    if(minlen==INT_MAX)
    {
        printf("No window found");
    }
    else
    {
        printf("Minimum window: ");
        for(int i=start;i<start+minlen;i++)
        {
            printf("%c", s[i]);
        }
    }
}
