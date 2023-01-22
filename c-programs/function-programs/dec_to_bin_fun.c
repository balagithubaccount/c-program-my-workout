
// Write a C program to convert decimal number to binary number using the function.

#include <stdio.h>
void convert(int dec);
void main()
{
   int dec;
   printf("Enter the decimal Number: ");
   scanf("%d", &dec);
   convert(dec);
}
void convert(int dec)
{
   int i, bin = 0, rem, pos = 1;
   for (i = dec; dec != 0; dec /= 2)
   {
      rem = dec % 2;
      bin = bin + (pos * rem);
      pos *= 10;
   }
   printf("The Binary value is: %d\n", bin);
}
/*
 Sample Output:

 Enter the decimal Number: 10
 The Binary value is: 1010

 Enter the decimal Number: 18
 The Binary value is: 10010
*/
