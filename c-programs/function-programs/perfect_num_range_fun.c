
// 10. Write a C program to print all perfect numbers in given range using the function.

#include <stdio.h>
int perfect_num(int start, int end)
{
   int i, j, sum;
   printf("The perfect numbers between %d to %d are: ", start, end);
   for (i = start; i <= end; i++)
   {
      sum = 0;
      for (j = 1; j < i; j++)
      {
         if (i % j == 0)
         {
            sum = sum + j;
         }
      }
      if (sum == i)
      {
         printf("%d ", i);
      }
   }
}
void main()
{
   int start_num, end_num;
   printf("Enter the starting number for find perfect number: ");
   scanf("%d", &start_num);
   printf("Enter the ending number for find perfect number: ");
   scanf("%d", &end_num);
   perfect_num(start_num, end_num);
   printf("\n");
}
/*
  Sample Output:

   Enter the starting number for find perfect number: 1
   Enter the ending number for find perfect number: 100
   The perfect numbers between 1 to 100 are: 6 28
*/