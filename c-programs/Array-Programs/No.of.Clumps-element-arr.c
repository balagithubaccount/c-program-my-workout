   //Write a C prgram to find the number of clumps (a series 2 or more adjacent elements of the same value) in a given array...

   #include <stdio.h>
   void main()
   {
     int size, i, j, temp, count=0;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d Elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size; i++)
     {
       temp=0;
       for(j=i+1; j<size; j++)
       {
         if(arr[i]!=arr[j])
         {
           break;
         }
         else
         {
           i++;
           temp=1;
         }
       }
       if(temp==1)
       {
          count++;
       }
     }
     printf("\nThe Number of Clumps in the array is: %d\n",count);
   }

   /*
   Output:

   Enter the array size: 9
   Enter the 9 Elements: 17 42 42 7 24 24 17 54 17
   The Given array is: 17 42 42 7 24 24 17 54 17 
   The Number of Clumps in the array is: 2

   */
