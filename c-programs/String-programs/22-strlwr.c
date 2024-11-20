//Write a program in C to convert a string to lowercase.

#include <stdio.h>
void string_lwr(char *ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='A' && *ptr <= 'Z')
        {
            *ptr = *ptr + ' ';
             ptr++;
        }
        else
        {
            ptr++;
        }
    }
}
int main()
{
    char string[100];
    printf("Input the String in UPPERCASE: ");
    scanf(" %[^\n]",string);

    printf("\nGiven String is: %s\n",string);
    string_lwr(string);
    printf("Here is the above string in lowercase: %s\n",string);

    return 0;
}

/*
Sample Output:

Input the String in UPPERCASE: THIS QUICK BROWN FOX JUMPS OVER THE LAZY DOG.

Given String is: THIS QUICK BROWN FOX JUMPS OVER THE LAZY DOG.
Here is the above string in lowercase: this quick brown fox jumps over the lazy dog.

*/
