//Write a C program to check whether a character is Hexadecimal Digit or not. 

#include <stdio.h>
int hexa_or_not(char var)
{
    if((var >= 'a' && var <= 'f') || (var >= 'A' && var <= 'F') || (var >= '0' && var <= '9'))
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
    char var;
    
    printf("Input a character: ");
    scanf("%c",&var);
    
    printf("Giver Character is: %c\n",var);
    if(hexa_or_not(var) > 0)
    {
        printf("The Entered character '%c' is a hexadecimal digit.\n",var);
    }
    else
    {
        printf("The Entered character '%c' is not a hexadecimal digit.\n",var);
    }
}

/*
Sample Output:

Input a character: 7
Giver Character is: 7
The Entered character '7' is a hexadecimal digit.

*/