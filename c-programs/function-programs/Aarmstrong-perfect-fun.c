
// Write a C program to check armstrong and perfect numbers using the function.

#include <stdio.h>
int i, sum;
void armstrong(int num, int digit)
{
   int rem, armstrong = 0, j;
   for (i = num; num != 0; num /= 10)
   {
      rem = num % 10;
      sum = 1;
      for (j = 1; j <= digit; j++)
      {
         sum = sum * rem;
      }
      armstrong = armstrong + sum;
   }
   if (armstrong == i)
   {
      printf("The %d is an Armstrong number.\n", i);
   }
   else
   {
      printf("The %d is not an Armstrong number.\n", i);
   }
}

void perfect_num(int num)
{
   sum = 0;
   for (i = 1; i < num; i++)
   {
      if (num % i == 0)
      {
         sum = sum + i;
      }
   }
   if (sum == num)
   {
      printf("The %d is a Perfect number.\n", num);
   }
   else
   {
      printf("The %d is not a Perfect number.\n", num);
   }
}
void main()
{
   int giv_num, count = 0;
   printf("Enter the number: ");
   scanf("%d", &giv_num);
   for (i = giv_num; giv_num != 0; giv_num /= 10)
   {
      count++;
   }
   armstrong(i, count);
   perfect_num(i);
}

/*
Sample Output:

Enter the number: 371
The 371 is an Armstrong number.
The 371 is not a Perfect number.
*/
