//Write a C program to count the number of punctuation characters exists in a string.

#include <stdio.h>
int count_punctuation(char* ptr)
{
    int count=0;
    for(int i=0; *ptr!='\0'; ptr++)
    {
        if(*ptr != 32 || *ptr != ' ')
        {
            if( (*ptr >= 0 && *ptr <= 47) || (*ptr >= 58 && *ptr <= 64) || (*ptr >= 91 && *ptr <= 96) || (*ptr >= 123 && *ptr <= 127))
            {
               count++;
            }
        }
    }
    return count;
}
int main()
{
    char string[100];
    printf("Input a string: ");
    scanf(" %[^\n]",string);

    printf("\nThe Given string is: %s\n",string);

    printf("\nThe punctuation characters exists in the string is: %d\n",count_punctuation(string));

    return 0;
}

/*
Sample Output:

Input a string: The quick brown fox, jumps over the, lazy dog.

The Given string is: The quick brown fox, jumps over the, lazy dog.

The punctuation characters exists in the string is: 3

*/
