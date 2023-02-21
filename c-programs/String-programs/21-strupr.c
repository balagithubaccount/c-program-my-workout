// Write a program in C to convert a string to uppercase.
 
#include <stdio.h>
void string_upr(char *ptr)
{
    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - ' ';
            ptr++;
        }
        else
        {
            ptr++;
        }
    }
}
void main()
{
    char string[100];
    printf("Input the String in lowercase: ");
    scanf(" %[^\n]", string);

    printf("\nGiven String is: %s\n", string);
    string_upr(string);
    printf("Here is the above string in UPPERCASE: %s\n", string);
}

/*
Sample Output:

Input the String in lowercase: the quick brown fox jumps over the lazy dog.

Given String is: the quick brown fox jumps over the lazy dog.
Here is the above string in UPPERCASE: THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.

*/