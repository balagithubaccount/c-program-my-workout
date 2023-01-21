
  //Write a C program to find the square of any number using the function.

   #include <stdio.h>
   void square(int num);
   void main()
   {
      int n;
      printf("Enter the number: ");
      scanf("%d",&n);
      square(n);
   }
   void square(int num)
   {
      int sqr = num*num;
      printf("The square of %d is: %d\n",num,sqr);
   }

   /*
   Output:

   Enter the number: 20
   The square of 20 is: 400

   */
