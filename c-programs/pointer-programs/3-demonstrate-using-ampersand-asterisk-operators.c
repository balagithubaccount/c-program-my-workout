// Write a C program to demonstrate the use of &(address of) and *(value at address) operator.

#include <stdio.h>
int main()
{
    int m = 45;
    float fx = 34.67527;
    char cht = 'B';

    int *pt1 = &m;
    float *pt2 = &fx;
    char *pt3 = &cht;

    printf("Using & (reference )operator:\n\n");

    printf("Address of m is: %p\n", &m);
    printf("Address of fx is: %p\n", &fx);
    printf("Address of cht is: %p\n\n\n", &cht);

    printf("Using pointer variables:\n\n");

    printf("value of pt1 is: %p\n", pt1);
    printf("value of pt2 is: %p\n", pt2);
    printf("value of pt3 is: %p\n\n\n", pt3);

    printf("Using & operator:\n\n");

    printf("Address of pt1 is: %p\n", &pt1);
    printf("Address of pt2 is: %p\n", &pt2);
    printf("Address of pt3 is: %p\n\n\n", &pt3);

    printf("Using * (dereference) operator: \n\n");

    printf("value of m is: %d\n", m);
    printf("value of fx is: %f\n", fx);
    printf("value of cht is: %c\n\n", cht);

    printf("value of m is: %d\n", *pt1);
    printf("value of fx is: %f\n", *pt2);
    printf("value of cht is: %c\n", *pt3);

    return 0;
}
/*
Sample Output:

Using & (reference )operator:

Address of m is: 0x7ffd4e60d528
Address of fx is: 0x7ffd4e60d52c
Address of cht is: 0x7ffd4e60d527


Using pointer variables:

value of pt1 is: 0x7ffd4e60d528
value of pt2 is: 0x7ffd4e60d52c
value of pt3 is: 0x7ffd4e60d527


Using & operator:

Address of pt1 is: 0x7ffd4e60d530
Address of pt2 is: 0x7ffd4e60d538
Address of pt3 is: 0x7ffd4e60d540


Using * (dereference) operator:

value of m is: 45
value of fx is: 34.675270
value of cht is: B

value of m is: 45
value of fx is: 34.675270
value of cht is: B

*/
