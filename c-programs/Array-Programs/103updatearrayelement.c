   //103. Write a C program to update every array element with multiplication of previous and next number in array...
   
   #include <stdio.h>
   void main()
   {
     int size, i;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size],copyarr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
       copyarr[i]=arr[i];
     }
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size; i++)
     {
       if(i==0)
       {
         copyarr[i]=arr[i]*arr[i+1];
       }
       else if(i==(size-1))
       {
         copyarr[i]=arr[i]*arr[i-1];
       }
       else
       {
         copyarr[i]=arr[i-1]*arr[i+1];
       }
     }
     printf("\nThe Updated array is: ");
     for(i=0;  i<size; i++)
     {
       printf("%d ",copyarr[i]);
     }
     printf("\n");
   }

   /*
   Output:

   Enter the array size: 6
   Enter the 6 elements: 1 2 3 4 5 6 
   The Given array is: 1 2 3 4 5 6 
   The Updated array is: 2 3 8 15 24 30
   */
