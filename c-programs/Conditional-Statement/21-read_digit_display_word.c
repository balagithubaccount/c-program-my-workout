//Write a C program to read any digit, display in the word.

#include <stdio.h>
int main()
{
    int digit;
    printf("Input a digit(0 to 9): ");
    scanf("%d",&digit);
    switch(digit)
    {
        case 0:
        printf("Entered digit is ZERO (%d)\n",digit);
        break;

        case 1:
        printf("Entered digit is ONE (%d)\n",digit);
        break;

        case 2:
        printf("Entered digit is TWO (%d)\n",digit);
        break;

        case 3:
        printf("Entered digit is THREE (%d)\n",digit);
        break;

        case 4:
        printf("Entered digit is FOUR (%d)\n",digit);
        break;

        case 5:
        printf("Entered digit is FIVE (%d)\n",digit);
        break;

        case 6:
        printf("Entered digit is SIX (%d)\n",digit);
        break;

        case 7:
        printf("Entered digit is SEVEN (%d)\n",digit);
        break;

        case 8:
        printf("Entered digit is EIGHT (%d)\n",digit);
        break;

        case 9:
        printf("Entered digit is NINE (%d)\n",digit);
        break;

        default:
        printf("Entered digit is wrong.\n");
    }
    return 0;
}
/*

Output:

Input a digit(0 to 9): 7
Entered digit is SEVEN (7)

*/