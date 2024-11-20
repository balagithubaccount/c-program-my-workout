// Write a C program to separate the individual characters from a string.

#include <stdio.h>
int n = 100;
void split_characters(char *ptr)
{
    printf("The Characters of the string are: ");
    while (*ptr != '\0')
    {
        printf("%c%c", *ptr, 32); // 32- exmpty space
        ptr++;
    }
}
int main()
{
    char string[n];

    printf("Input the String: ");
    fgets(string, sizeof(string), stdin);

    printf("Given string: %s", string);
    split_characters(string);

    return 0;
}

/*
Sample Output:

Input the String: Yes, You Can Do It!
Given string: Yes, You Can Do It!
The Characters of the string are: Y e s ,   Y o u   C a n   D o   I t !
*/