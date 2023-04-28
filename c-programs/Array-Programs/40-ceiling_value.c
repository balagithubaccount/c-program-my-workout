   //40. Write a C program to find the ceiling in a sorted array.

   #include<stdio.h>
   void main()
   {
     int size, i, ceil, value,j=0;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("Enter the value for to find ceiling: ");
     scanf("%d",&value);
     for(i=0; i<=size; i++)
     {
       if(arr[i]>=value)
       {
       ceil=arr[i];
       break;
       }
     }
     printf("The given array is: ");
     for(i=0; i<size; i++)
     {
        printf("%d ",arr[i]);
     }
     printf("\nThe ceiling of %d is: %d\n",value, ceil);
   }

   /*
   Enter the size of the array: 8
   Enter the 8 elements: 1 3 4 7 8 9 9 10
   Enter the value for to find ceiling: 5
   The given array is: 1 3 4 7 8 9 9 10 
   The ceiling of 5 is: 7

   */
