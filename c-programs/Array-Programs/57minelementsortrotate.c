   //57. Write a C program to find minumum element in a sorted and rotated array...

   #include <stdio.h>
   void main()
   {
     int size, i, min_num;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size];
     
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     min_num=arr[0];
     for(i=0; i<size; i++)
     {
       if(min_num>arr[i] && arr[i]<arr[i+1]) 
       {
         printf("\nThe minimum element for sorted and rotated array is: %d\n",arr[i]);
         break;
       }
       if(i==(size-1))
       {
         printf("\nThe Minimum element in a sorted array is: %d\n",arr[0]);
         break;
       }
     }
   }

   /*
   Output: 

   Enter the array size: 7
   Enter the 7 elements: 3 4 5 6 7 9 2
   The Given array is: 3 4 5 6 7 9 2 
   The minimum element for sorted and rotated array is: 2

   */
