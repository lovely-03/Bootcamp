#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int dp[100][100];
    int i, j;
    printf("Enter first string: ");
    scanf("%s", &str1);
    printf("Enter second string: ");
    scanf("%s", &str2);
    int m = strlen(str1);
    int n = strlen(str2);
    for(i = 0; i <= m; i++) {
        for(j = 0; j <= n; j++) {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else {
                if(dp[i - 1][j] > dp[i][j - 1])
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
    }
    printf("Length of Longest Common Subsequence = %d", dp[m][n]);
    return 0;
}