
// Write a C program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5+... using the function.

#include <stdio.h>
void sum_series(int term);
void main()
{
   int term;
   printf("Enter the terms: ");
   scanf("%d", &term);
   sum_series(term);
}
void sum_series(int term)
{
   int i, j;
   float fac, sum = 0;
   for (i = 1; i <= term; i++)
   {
      fac = 1;
      for (j = i; j >= 1; j--)
      {
         fac = fac * j;
      }
      sum = sum + (fac / i);
   }
   printf("The sum of the series is: %.0f\n", sum);
}

/*
   Sample Output:1

   Enter the terms: 5
   The sum of the series is: 34

   Sample Output:2

   Enter the terms: 7
   The sum of the series is: 874
*/
