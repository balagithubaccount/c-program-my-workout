// 1. alphabet or not
#include <stdio.h>
int main()
{
    char character;
    printf("Enter the any one character: ");
    scanf("%c", &character);
    if (character >= 65 && character <= 90)
    {
        printf("You entered character '%c' is alphabet.\n", character);
    }
    else if (character >= 97 && character <= 122)
    {
        printf("You entered character '%c' is alphabet.\n", character);
    }
    else
    {
        printf("You entered character '%c' is 'not' alphabet.", character);
    }
    return 0;
}
/*

*/