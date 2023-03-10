// Write a C programming to find the longest Palindromic substring from a given string.
#include <stdio.h>
#include <string.h>

void long_palindrom(char str[], int l)
{
    printf("Given string is: %s\n", str);
    int i, j, k = 0, m, n, temp, start = 0, end = 0, max_start = 0, max_end = 0, diff = 0;

    for (i = k; i < l; i++)
    {
        for (j = l; i < j; j--)
        {
            if (str[i] == str[j])
            {
                temp = 1;
                start = i;
                end = j;
                for (m = i + 1, n = j - 1; m < n; m++, n--)
                {
                    if (str[m] != str[n])
                    {
                        start = end = 0;
                        break;
                    }
                }
            }
            if (diff < (end - start) && temp == 1)
            {
                diff = end - start;
                max_start = i;
                max_end = j;
                temp = 0;
            }
        }
    }
   
    printf("Longest Palindromic substring is: ");
    for (i = max_start; i <= max_end; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main()
{
    char string[100];
    printf("Input a String: ");
    scanf(" %[^\n]", string);
    long_palindrom(string, strlen(string) - 1);

    if (strlen(string) != 0)
    {
        long_palindrom(string, strlen(string) - 1);
    }
    else
    {
        printf("No String Found\n");
    }

    return 0;
}

/*

Sample Output:1

Input a String: banana
Given string is: banana
Longest Palindromic substring is: anana

Sample Output:2

Input a String: level
Given string is: level
Longest Palindromic substring is: level

Sample Output:3

Input a String: madam
Given string is: madam
Longest Palindromic substring is: madam

*/