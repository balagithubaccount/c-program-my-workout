//Write a C program to check whether a letter is uppercase or not. 

#include <stdio.h>
int uppercase_or_not(char letter)
{
    if(letter >= 'A' && letter <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char letter;
    printf("Input a character: ");
    scanf("%c",&letter);
    printf("Given Character is:'%c'\n",letter);

    if(uppercase_or_not(letter) > 0)
    {
        printf("The Entered letter is an UPPERCASE letter.\n");
    }
    else
    {
        printf("The Entered letter is not an UPPERCASE letter.\n");
    }

    return 0;
}

/*
Sample Output:

Input a character: p
Given Character is:'p'
The Entered letter is not an UPPERCASE letter.

*/