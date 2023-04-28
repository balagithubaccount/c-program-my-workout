// to find LCM of any two numbers using HCF

#include <stdio.h>
void main()
{
  int num1, num2, hcf, i, j, lcm;
  printf("Input the 1st number of LCM: ");
  scanf("%d", &num1);
  printf("Input the 2nd number of LCM: ");
  scanf("%d", &num2);

  j = (num1 < num2) ? num1 : num2;
  for (i = 1; i <= j; i++)
  {
    if (num1 % i == 0 && num2 % i == 0)
    {
      hcf = i;
    }
  }
  lcm = (num1 * num2) / hcf;
  printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
}

/*
Sample Output:

Input the 1st number of LCM: 5
Input the 2nd number of LCM: 10
LCM of 5 and 10 is: 10

*/
