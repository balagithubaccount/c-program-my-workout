   //39. Write a C program to rotate an array by N positions.

   #include<stdio.h>
   void main()
   {
     int size, position, i, j=0;
     printf("Enter the array size: ");
     scanf("%d",&size);
     printf("Enter the position for rotate array: ");
     scanf("%d",&position);
     int array[size], rotate[position];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)  
     {
       scanf("%d",&array[i]);
     }
     for(i=0; i<position; i++)
     {
       rotate[i]=array[j++];
     }
     printf("\n\n---------------------------------\n\n");
     printf("The given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",array[i]); 
     }
     printf("\nFrom %dth position the values of the array are: ",position);
     for(i=position; i<size; i++)
     { 
       printf("%d ",array[i]); 
     }
     printf("\nBefore %dth position the values of the array are : ",position);
     for(i=0; i<position; i++)
     {
       printf("%d ",rotate[i]);
     }
     for(i=0,j=0; i<size; i++)   
     {
       if(i>=size-position)
       {
         array[i]=rotate[j++];
       }
       else
       {
         array[i]=array[i+position];
       }
     }
     printf("\nAfter rotating from %dth position the array is: ",position);
     for(i=0; i<size; i++)
     {
       printf("%d ",array[i]);
     }
     printf("\n"); 
   }

   /*
   Output:

   Enter the array size: 11
   Enter the position for rotate array: 4
   Enter the 11 elements: 0 3 6 9 12 14 18 20 22 25 27


   ---------------------------------

   The given array is: 0 3 6 9 12 14 18 20 22 25 27 
   From 4th position the values of the array are: 12 14 18 20 22 25 27 
   Before 4th position the values of the array are : 0 3 6 9 
   After rotating from 4th position the array is: 12 14 18 20 22 25 27 0 3 6 9 

   */
