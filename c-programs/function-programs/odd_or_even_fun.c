
// Write a C program to check a given number is even or odd using the function.

#include <stdio.h>
void oddoreven(int num);
void main()
{
   int n;
   printf("Enter the number: ");
   scanf("%d", &n);
   oddoreven(n);
}
void oddoreven(int num)
{
   if (num % 2 == 0)
   {
      printf("The Given number %d is Even.\n", num);
   }
   else
   {
      printf("The Given number %d is Odd.\n", num);
   }
}

/*
Sample Output:1

Enter the number: 76
The Given number 76 is Even.

Sample Output:2

Enter the number: 75
The Given number 75 is Odd.

*/
