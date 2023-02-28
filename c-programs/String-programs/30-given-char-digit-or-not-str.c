//Write a C program to check whether a character is digit or not. 

#include <stdio.h>
int digit_or_not(char var)
{
   if(var >= '0' && var <= '9')
   {
      return 1;
   }
   else 
   {
      return 0;
   }
}
void main()
{
   char var;
   printf("Input a cahracter: ");
   scanf("%c",&var);
   printf("\nThe entered character is: %c\n",var);

   if(digit_or_not(var) > 0)
   {
      printf("The Entered character is a digit.\n");
   }
   else
   {
      printf("The Entered character is not a digit.\n");
   }
}

/*
Sample Output:1

Input a cahracter: d

The entered character is: d
The Entered character is not a digit.

Sample Output:2

Input a cahracter: 8

The entered character is: 8
The Entered character is a digit.

*/