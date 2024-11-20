// Write a program in C to remove characters in String Except Alphabets.

#include <stdio.h>
#include <string.h>

void removing_except_alphabets(char *ptr1, char *ptr2, int len)
{
    for (int i = 0; i < len; i++)
    {
        if ((*ptr1 >= 'a' && *ptr1 <= 'z') || (*ptr1 >= 'A' && *ptr1 <= 'Z'))
        {
           
            *ptr2 = *ptr1;
            ptr1++;
            ptr2++;
        }
        else
        { 
            ptr1++;
        }
    }
    *ptr2 = '\0';
}
void main()
{
    char string[100];
    printf("Input the String: ");
    scanf(" %[^\n]", string);
    printf("\nGiven String is: %s\n", string);
    removing_except_alphabets(string, string, strlen(string));
    printf("After removing the Output String: %s\n.", string);
}

/*
Sample Output:

Input the String: Bucky#$_123

Given String is: Bucky#$_123
After removing the Output String: Bucky

*/