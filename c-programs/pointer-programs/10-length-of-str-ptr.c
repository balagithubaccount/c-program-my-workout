// Write a C program to find the length of a string without using library function.

#include <stdio.h>
int N = 100;

int strlength(char str[]);
void main()
{
    char string[N];
    printf("Input the string: ");
    fgets(string, sizeof(string), stdin);
    printf("Length of the string is: %d\n", strlength(string));
}
int strlength(char str[])
{
    char *ptr = str;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return (len - 1);
}
/*
Sample Output:

Input the string: HelloWorld
Length of the string is: 10
*/
