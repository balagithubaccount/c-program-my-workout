//Write a C program to Find the Frequency of Characters.

#include <stdio.h>
int char_frequency(char* ptr, char var)
{
    int i, count=0;
    do
    {
        if(*ptr == var)
        {
            count++;
            ptr++;
        }
        else
        {
            ptr++;
        }
    }while(*ptr!='\0');
    return count;
}
void main()
{
    char string[100], Char;
    int count;
    printf("Input the string: ");
    scanf(" %[^\n]",string);
    printf("Input the character to find frequency: ");
    scanf(" %c",&Char);
    printf("\nThe given string is: %s\n",string);
    printf("The given character is: %c\n",Char);
    count = char_frequency(string,Char);
    printf("The Frequency of '%c' is: %d\n",Char,count);
}

/*
Sample Output:

Input the string: This is a test string
Input the character to find frequency: i

The given string is: This is a test string
The given character is: i
The Frequency of 'i' is: 3

*/