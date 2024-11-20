// Write a program in C to print a string in reverse using a pointer.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], revstr[50];
    printf("Input a string: ");
    scanf(" %[^\n]", str);
    int n = strlen(str);
    int i = 0;

    while (n >= 0)
    {
        *(revstr + i++) = *(str + (--n));
    }
    *(revstr + i) = '\0';

    printf("Reverse of the string is: %s\n", revstr);
}

/*
Sample Output:

Input a string: T E S T
Reverse of the string is: T S E T

*/ 