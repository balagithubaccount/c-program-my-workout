//Write a C program to read any month number in integer and display month name in the word.

#include <stdio.h>
int main()
{
    int month;
    printf("Enter a Month Number (1 to 12): ");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
        printf("Entered month is: %d - JANUARY",month);
        break;

        case 2:
        printf("Entered month is: %d - FEBRUARY",month);
        break;

        case 3:
        printf("Entered month is: %d - MARCH",month);
        break;

        case 4:
        printf("Entered month is: %d - APRIL",month);
        break;

        case 5:
        printf("Entered month is: %d - MAY",month);
        break;

        case 6:
        printf("Entered month is: %d - JUNE",month);
        break;

        case 7:
        printf("Entered month is: %d - JULY",month);
        break;

        case 8:
        printf("Entered month is: %d - AUGUST",month);
        break;

        case 9:
        printf("Entered month is: %d - SEPTEMBER",month);
        break;

        case 10:
        printf("Entered month is: %d - OCTOBER",month);
        break;

        case 11:
        printf("Entered month is: %d - NOVEMBER",month);
        break;

        case 12:
        printf("Entered month is: %d - DECEMBER",month);
        break;

        default :
        printf("Entered month number is invalid.\n");
    }
    printf("\n");
    return 0;
}

/*
Sample Output:

Enter a Month Number (1 to 12): 2
Entered month is: 2 - FEBRUARY

*/