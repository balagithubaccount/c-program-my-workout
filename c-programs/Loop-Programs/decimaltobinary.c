// Write a C program to convert a decimal number into binary without using an array.

#include <stdio.h>
void main()
{
  long long int num, term, r, bin = 0, place = 1, count = 0, space;
  printf("Input the decimal number: ");
  scanf("%lld", &num);
  printf("Binary format for the given numbern %lld is: ", num);
  for (term = num; num != 0; num = num / 2)
  {
    r = num % 2;
    bin = bin + (r * place);
    place = place * 10;
    // count++;
  }
  printf(" %lld\n", bin);
}
/*
Sample Output:

Input the decimal number: 81
Binary format for the given numbern 81 is:  1010001

*/