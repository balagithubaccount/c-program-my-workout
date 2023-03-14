//  Write a C program to demonstrate how to handle the pointers in the program.

#include <stdio.h>
int main()
{
    int m = 20;
    int *ab = &m;

    printf("value of m is: %d\n", m);
    printf("address of m is: %p\n", &m);
    printf("value of ab is: %p\n", ab);
    printf("address of ab is: %p\n", &ab);
    printf("dereference of ab is: %d\n\n", *ab);

    m = 45;
    printf("after change m value is: %d\n", m);
    printf("Now, dereference value of ab is: %d\n\n", *ab);

    *ab = 3;
    printf("Now, the value of m is: %d\n", m);

    return 0;
}

/*
Sample Output:

value of m is: 20
address of m is: 0x7ffe4a0e5aec
value of ab is: 0x7ffe4a0e5aec
address of ab is: 0x7ffe4a0e5af0
dereference of ab is: 20

after change m value is: 45
Now, dereference value of ab is: 45

Now, the value of m is: 3

*/