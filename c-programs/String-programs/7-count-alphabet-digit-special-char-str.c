// Write a C program to count total number of alphabets, digits and special characters in a string.

#include <stdio.h>
void count_letters_digits_special_char(char *ptr)
{
    int alphabet = 0, digit = 0, special_char = 0;

    while (*ptr != '\0' && *ptr != '\n')
    {
        if ((*ptr >= 97 && *ptr <= 122) || (*ptr >= 65 && *ptr <= 90))
        {
            alphabet++;
        }
        else if (*ptr >= 48 && *ptr <= 57)
        {
            digit++;
        }
        else
        {
            special_char++;
        }
        ptr++;
    }
    printf("\nNumber of Alphabets in the string is: %d\n", alphabet);
    printf("Number of Digits in the string is: %d\n", digit);
    printf("Number of Special characters in the string is: %d\n", special_char);
}
void main()
{
    char string[100];
    printf("Input the String: ");
    scanf(" %[^\n]", string);
    printf("Given string is: %s", string);
    count_letters_digits_special_char(string);
}
/*
Sample Output:

Input the String: Excel AKG 53 E-Diabtic Drop.
Given string is: Excel AKG 53 E-Diabtic Drop.
Number of Alphabets in the string is: 20
Number of Digits in the string is: 2
Number of Special characters in the string is: 6
*/