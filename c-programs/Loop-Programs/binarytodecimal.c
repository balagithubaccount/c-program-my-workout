// to convert a binary number into a decimal number without using array, function and while loop. Go to the editor

#include <stdio.h>
void main()
{
  long long int num, term, r, dec = 0, base = 1;
  printf("Input the binary Number: ");
  scanf("%lld", &num);
  printf("Decimal number is: ");
  for (term = num; num != 0; num = num / 10)
  {
    r = num % 10;
    dec = dec + (r * base);
    base = base * 2;
  }
  printf("%lld\n", dec);
}
/*
Sample Output:

Input the binary Number: 1010001
Decimal number is: 81

*/