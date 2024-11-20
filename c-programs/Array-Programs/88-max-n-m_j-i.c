   //88. Write a C program to find the maximum n-m such that array[n]>array[m] from a given array[].
  //     Given array arr[], maximum j-i such that arr[j]>arr[i]...

   #include<stdio.h>
   void main()
   {
     int size, i, j, diff, max_diff=0,exit=0;
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
     for(i=0; i<size; i++)
     {
        for(j=i+1; j<size; j++)
        {
          if(arr[i]<arr[j])
          {
            exit=1;
            diff=j-i;
            if(max_diff<diff)
            {
              max_diff=diff;
            }
            printf("\nm=%d, n=%d, arr[m]=%d, arr[n]=%d: Difference=%d\n",i,j,arr[i],arr[j],diff);
          }
        }
     }
     if(exit==1)
     {
       printf("\nThe maximum differences between two position of array index is: %d\n",max_diff);
     }
     else
     {
       printf("\nThere are not exist maximum different between two position of array index.\n");
     }
   }

   /*
   Output:

   Enter the array size: 10
   Enter the 10 elements: 7 5 8 2 3 2 4 2 1 0
   The Given array is: 7 5 8 2 3 2 4 2 1 0 
   m=0, n=2, arr[m]=7, arr[n]=8: Difference=2

   m=1, n=2, arr[m]=5, arr[n]=8: Difference=1

   m=3, n=4, arr[m]=2, arr[n]=3: Difference=1

   m=3, n=6, arr[m]=2, arr[n]=4: Difference=3

   m=4, n=6, arr[m]=3, arr[n]=4: Difference=2

   m=5, n=6, arr[m]=2, arr[n]=4: Difference=1

   The maximum differences between two position of array index is: 3
*/
