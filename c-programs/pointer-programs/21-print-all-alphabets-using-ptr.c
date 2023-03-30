// Write a program in C to print all the alphabets using pointer.

#include <stdio.h>
int main()
{
    char alphabet[26];
    char *ptr = alphabet;
    *alphabet = 'A';

    for (int i = 0; i < 26; i++)
        alphabet[i] = *alphabet + i;

    printf("Alphabets are: ");

    for (int i = 0; i < 26; i++)
        printf("%c  ", alphabet[i]);
    printf("\n");
}

/*
Sample Output:

Alphabets are: A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
*/