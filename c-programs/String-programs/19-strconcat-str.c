//Write a program in C to Concatenate Two Strings Manually.

#include <stdio.h>
int size = 100;
int string_concat(char * ptr1, char* ptr2)
{
    while(*ptr1 != '\0')
    {
        ptr1++;
    }
    *ptr1 = ' ';
     ptr1++;
    while(*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
         ptr2++;
         ptr1++;
    }
    *ptr1 = '\0';
}
void main()
{
    char string1[size], string2[size];
    int a=0;

    printf("Input the string 1: ");
    scanf(" %[^\n]",string1);

    printf("Input the string 2: ");
    scanf(" %[^\n]",string2);

    printf("Given string 1 is: %s\n",string1);
    printf("Given string 2 is: %s\n",string2);

    string_concat(string1,string2);
    printf("After Concatenation the string is: %s\n",string1);
}

/*
Sample Output:

Input the string 1: This is string one,
Input the string 2: This is string two.
Given string 1 is: This is string one,
Given string 2 is: This is string two.
After Concatenation the string is: This is string one, This is string two.

*/