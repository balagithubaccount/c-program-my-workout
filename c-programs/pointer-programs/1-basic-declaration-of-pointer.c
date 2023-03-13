// Write a C program to show the basic declaration of a pointer.


#include <stdio.h>
int main()
{
    int m, n, o;
    int *z;

    m = 10;
    z = &m;

    printf("z stores the address of m: %p\n", z);
    printf("\n*z stores the value of m: %d\n", *z);
    printf("\n&m is the address of m: %p\n", &m);
    printf("\n&n stores the address of n: %p\n", &n);
    printf("\n&o  stores the address of o: %p\n",&o);
    printf("\n&z stores the address of z: %p\n", &z);
}

/*
Sample Output:

z stores the address of m: 0x7ffcdb2f16f4

*z stores the value of m: 10

&m is the address of m: 0x7ffcdb2f16f4

&n stores the address of n: 0x7ffcdb2f16f8

&o  stores the address of o: 0x7ffcdb2f16fc

&z stores the address of z: 0x7ffcdb2f1700

*/