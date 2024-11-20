// Write a C program to print individual characters of string in reverse order.

#include <stdio.h>
int strlength(char str[])
{
    char *ptr = str;
    int len;
    for (len = 0; *ptr != '\0';)
    {
        len++;
        ptr++;
    }
    return (len - 1);
}
void main()
{
    char string[100];
    int i, len;

    printf("Input the string: ");
    fgets(string, sizeof(string), stdin);
    printf("Given string: %s", string);

    len = strlength(string);
    
    printf("Reverse order of the given string is: ");
    for (i = len - 1; i >= 0; i--)
      printf("%c%c", string[i], 32);
    
    printf("\n");
}

/*
Sample Output:

Input the string: Aspiring core developer
Given string: Aspiring core developer
Reverse order of the given string is: r e p o l e v e d   e r o c   g n i r i p s A
*/