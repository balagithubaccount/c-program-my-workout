// Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.

#include <stdio.h>
void lower_to_upper(char *ptr)
{
    *ptr = *ptr - ' ';
}
void upper_to_lower(char *ptr)
{
    *ptr = *ptr + ' ';
}
int main()
{
    char string[100];
    printf("Input the string: ");
    scanf(" %[^\n]", string);
    printf("\nThe Given string is: %s\n", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            upper_to_lower(&string[i]);
        }
        else if (string[i] >= 97 && string[i] <= 122)
        {
            lower_to_upper(&string[i]);
        }
    }
    printf("After Case changed the string is: %s\n", string);

    return 0;
}
/*
Sample Output:

Input the string: This Is a Test String.

The Given string is: This Is a Test String.
After Case changed the string is: tHIS iS A tEST sTRING.
*/