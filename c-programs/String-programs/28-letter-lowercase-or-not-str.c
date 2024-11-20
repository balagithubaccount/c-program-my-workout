//Write a program in C to check whether a letter is lowercase or not. 

#include <stdio.h>
int lowercase_or_not(char letter)
{
    if(letter >= 'a' && letter <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    char letter;
    printf("Input a character: ");
    scanf("%c",&letter);
    printf("Given Character is:'%c'\n",letter);

    if(lowercase_or_not(letter) > 0)
    {
        printf("The Entered letter is a lowercase letter.\n");
    }
    else
    {
        printf("The Entered letter is not a lowercase letter.\n");
    }
}

/*
Sample Output:

Input a character: w
Given Character is:'w'
The Entered letter is a lowercase letter.

*/