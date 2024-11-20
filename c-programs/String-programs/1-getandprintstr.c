// Write a C program to input a string and print it.

#include <stdio.h>
void printstr(char str[])
{
    printf("The string you entered is: %s\n", str);
}
void main()
{
    char str[100];
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printstr(str);
}

/*
Sample output:

Input the string: Welcome, to 1st string program
The string you entered is: Welcome, to 1st string program

*/
