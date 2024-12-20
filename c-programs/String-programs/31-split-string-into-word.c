// Write a program in C to split string by space into words.

#include <stdio.h>
int main()
{
    char string[100], word[30][20];
    printf("Input a string: ");
    scanf(" %[^\n]", string);

    int i, j = 0, col, flag = 1;
    for (i = 0; string[j] != '\0'; i++)
    {
        col = 0;
        while (string[j] != ' ' && flag == 1)
        {
            flag = 0;
            if (string[j] != '\0')
            {
                word[i][col++] = string[j];
                flag = 1;
                j++;
            }
        }
        word[i][col] = '\0';
        if (string[j] != '\0')
        {
            j++;
        }
    }

    printf("\nThe Given string is:\n%s\n\n", string);
    printf("Strings or words after split by space are: \n\n");
    for (j = 0; j < i; j++)
    {
        printf("%s\n", word[j]);
    }

    return 0;
}

/*
Sample Output:

Input a string: This is a test string.

The Given string is:
This is a test string.

Strings or words after split by space are:

This
is
a
test
string.

*/