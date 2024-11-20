   //Write a C program to count all distinct pairs for a specific difference...

   #include <stdio.h>
   void main()
   {
     int size, i, j, diff1,diff2, count;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++) 
     {
       scanf("%d",&arr[i]);
     }
     printf("Enter the difference: ");
     scanf("%d",&diff1);
     diff2=diff1*(-1);
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\nThe distinct pairs for difference %d are: ",diff1);
     count=0;
     for(i=0; i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
         if((arr[i]-arr[j])==diff1)
         {
           count++;
           printf("[%d, %d]",arr[i],arr[j]);
         }
         if((arr[i]-arr[j])==diff2)
         {
           count++;
           printf("[%d, %d]",arr[j],arr[i]);
         }
       }
     }
     printf("\nNumber of distinct pairs for difference %d are: %d\n",diff1,count);
   }

   /*
   Sample Output:

   Enter the size of the array: 8
   Enter the 8 elements: 5 2 3 7 6 4 9 8
   Enter the difference: 5
   The Given array is: 5 2 3 7 6 4 9 8 
   The distinct pairs for difference 5 are: [7, 2][8, 3][9, 4]
   Number of distinct pairs for difference 5 are: 3

   */
