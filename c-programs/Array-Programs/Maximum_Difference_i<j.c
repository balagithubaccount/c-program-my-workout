   //Write a C program to find out the maximum difference between any two elements such that larger element appears after
   //the smaller number.


   #include <stdio.h>
   void main()
   {
     int size, i, j, diff,maxdiff, maxi, maxj;
     printf("Enter the size of the array: ");
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
     maxdiff=0;
     for(i=0; i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
          diff=0;
          if(arr[i]<arr[j])
          {
             diff=arr[j]-arr[i];
          }
          if(maxdiff<diff)
          {
             maxdiff=diff;
             maxi=arr[i];
             maxj=arr[j];

          }
       }
     }
     printf("\nThe elements which provide maximum differencs is: %d, %d\n",maxi,maxj);
     printf("\nThe maximum difference between two elements in the array is: %d\n",maxdiff);
   }

/*
   Sample Output:

   Enter the size of the array: 6
   Enter the 6 elements: 7 9 5 6 13 2
   The Given array is: 7 9 5 6 13 2 
   The elements which provide maximum differencs is: 5, 13

   The maximum difference between two elements in the array is: 8
*/
