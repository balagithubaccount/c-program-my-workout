   //53. Write a C program to find the number of times(frequency) occurs a given number in an array...

   #include <stdio.h>
   void main()
   {
     int size, i , giv_num, count=0;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("The given array is: ");
      for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\nEnter the number for find number of times occurs that number: ");
     scanf("%d",&giv_num);
     for(i=0; i<size; i++)
     {
       if(giv_num==arr[i])
       {
         count++;
       }
     }
     if(count!=0)
     {
        printf("The number %d is occurs %d times in the given array.\n",giv_num,count);
     }
     else
     {
        printf("The given number %d is does not occurs in the given array.\n",giv_num);
     }
   }
/*
   Output:

   Enter the size of the array: 12
   Enter the 12 elements: 2 3 4 4 4 4 5 5 5 6 7 7 
   The given array is: 2 3 4 4 4 4 5 5 5 6 7 7 
   Enter the number for find number of times occurs that number: 4
   The number 4 is occurs 4 times in the given array.
*/
