

//3.  to check whether a number is negative, positive or zero

#include <stdio.h>
void main()
 {
   int x;
   printf("Enter the number: \n");
   scanf("%d",&x);
   printf("x = %d\n",x);
   if(x>0)
   {
    printf("A given number is positive\n");
   }
   else if(x<0)
   {
    printf("A given number is negative\n");}
   else
   {
    printf("A given number is Zero\n");
   }
}