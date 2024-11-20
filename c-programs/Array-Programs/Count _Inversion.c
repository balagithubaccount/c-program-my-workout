   //66. Write a C program to count the number of inversion in a given array...

   #include <stdio.h>
   void main() 
   {
     int size, i, j, count=0;
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
     printf("\nThe Inversions are: ");
     for(i=0;i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
         if(arr[i]>arr[j])
         {
           printf("(%d, %d) ",arr[i],arr[j]);
           count++;
         }
       }
     }
     printf("\nThe total number of inversion cab be formed from the array is: %d\n",count);
   }

  
   Output: 

   Enter the size of the array: 5
   Enter the 5 elements: 1 9 6 4 5
   The given array is: 19645
   The Inversions are: (9, 6) (9, 4) (9, 5) (6, 4) (6, 5) 
   The total number of inversion cab be formed from the array is: 5

   
