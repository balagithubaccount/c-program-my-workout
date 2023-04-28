   //61. Write a C program to find maximum product subarray in a given array.

   #include <stdio.h>
   void main()
   {
     int size, i, j, k, prod=1, max=0;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     for(i=0; i<size; i++)
     {
       for(j=0; j<size; j++)
       {
         prod=1;
         for(k=i; k<=j; k++)
         {
           prod=prod*arr[k];
         }
         if(max<prod)
         {
           max=prod;
         }
       }
     }
     printf("The maximum product of a sub-array in the given array is: %d\n",max);
   }
  
   /*
   Output:

   Enter the size of the array: 8
   Enter the 8 elements: -4 9 -7 0 -15 6 2 -3
   The maximum product of a sub-array in the given array is: 540
  
*/
