// Write a C program to find the biggest number in four variables using pointer.

#include <stdio.h>
int main()
{
   int a, b, c, d;
   int *A, *B, *C, *D;
   A = &a, B = &b, C = &c, D = &d;
   printf("Input the 4 values: ");
   scanf("%d%d%d%d", A, B, C, D);

   if (*A >= *B && *A >= *C && *A >= *D)
   {
      printf("big is %d\n", *A);
   }
   else if (*B >= *A && *B >= *C && *B >= *D)
   {
      printf("big is %d\n", *B);
   }
   else if (*C >= *A && *C >= *B && *C >= *D)
   {
      printf("big is %d\n", *C);
   }
   else
   {
      printf("big is %d\n", *D);
   }

   return 0;
}
/*
Sample Output:

Input the 4 values: 21 34 54 65
big is 65
*/
