// to display the pattern like a diamond.

#include <stdio.h>
void main()
{
   int row, s, b, main, a, p;
   printf("Input the number of rows: ");
   scanf("%d", &row);

   s = row * 2;
   b = 1;

   for (main = 1; main <= row; main++)
   {

      for (a = 1; a <= s; a++)
      {
         printf(" ");
      }
      for (p = 1; p <= b; p++)
      {
         printf("*");
      }
      printf("\n");
      b += 2;
      s--;
   }
   s = s + 2;
   b = b - 4;
   for (main = 1; main <= row - 1; main++)
   {
      for (a = 1; a <= s; a++)
      {
         printf(" ");
      }
      for (p = 1; p <= b; p++)
      {
         printf("*");
      }
      printf("\n");
      s++;
      b -= 2;
   }
}

/*
Sample output:

Input the number of rows: 5
          *
         ***
        *****
       *******
      *********
       *******
        *****
         ***
          *

*/