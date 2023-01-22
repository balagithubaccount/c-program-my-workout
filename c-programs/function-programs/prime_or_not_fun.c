
  // Write a C program to check whether a number is a prime number or not using the function.

   #include <stdio.h>
   void prime(int num)
   {
      int flag=0;
      if(num==0 || num==1)
      {
         flag=1;
      }
      for(int i=2; i<=num/2; i++)
      {
         if(num%i==0)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)   
      {
         printf("The Entered number %d is a prime number.\n",num);
      }  
      else
      {
         printf("The Entered number %d is not a prime number.\n",num);
      }
   }
   void main()
   {
      int num,i;
      for(i=2; i>=1; i--)
      {
         printf("Enter the positive number: ");
         scanf("%d",&num);
         prime(num);
         printf("\n");
      }
   }
/*
   Sample Output: 1

   Enter the positive number: 5
   The Entered number 5 is a prime number.

   Sample Output: 2
   Enter the positive number: 16
   The Entered number 16 is not a prime number.
*/
   
