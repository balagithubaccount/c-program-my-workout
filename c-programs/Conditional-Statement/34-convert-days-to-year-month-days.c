// Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

#include <stdio.h>
int main()
{
    int days;
    int year, month, day;

    printf("Input the number of days: ");
    scanf("%d",&days);
    printf("\n");;

    if(days > 0)
    {
        year = days / 365;
        days = days - (365*year);
        month = days / 30;
        days = days - (30*month);
        day = days;

        printf("%d - Year(s)\n", year);
        printf("%d - Month(s)\n", month);
        printf("%d - Day(s)\n", day);

    }
    else
    {
        printf("Input data is invalid!\n");
    }

    return 0;
}

/*
Sample Output:

Input the number of days: 2535

6 - Year(s)
11 - Month(s)
15 - Day(s)

*/