// Write a C programming to calculate the length of longest common subsequence of two given strings. The strings consist of alphabetical characters.

#include <stdio.h>
#include <string.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
void longest_common_subsequence(char str1[], char str2[], int n, int m)
{
    int result[50][50];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                result[i][j] = result[i - 1][j - 1] + 1;
            }
            else
            {
                result[i][j] = max(result[i - 1][j], result[i][j - 1]);
            }
        }
    }
    printf("\nLength of longest common subsequence of said strings: %d\n", result[n][m]);
}
int main()
{
    char string1[50], string2[50];

    printf("Input a 1st string: ");
    scanf(" %[^\n]", string1);
    printf("Input a 2nd string: ");
    scanf(" %[^\n]", string2);
    longest_common_subsequence(string1, string2, strlen(string1), strlen(string2));

    return 0;
}

/*
Sample Outpu:1

Input a 1st string: thisisatest
Input a 2nd string: testing123testing

Length of longest common subsequence of said strings: 7

*/