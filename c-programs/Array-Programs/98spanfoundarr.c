   //98. Write a C program to return the largest span found in the leftmost and rightmost appearances of same value
   //(values are inclusive ) in a given array...

   #include<stdio.h>
   void main()
   {
     int size, i, j, span, largespan=0;
     printf("Enter the total number of elements in an array is: ");
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
         if(arr[i]==arr[j])
         {
           span=j-i;
           if(largespan<span)
           {
             largespan=span;
           }
         }
       }
     }
     printf("\nThe span between the same values in the array is: %d\n",largespan);
   }
  
   /*
   Output:

   Enter the total number of elements in an array is: 9
   Enter the 9 elements: 17 42 19 7 27 24 17 54 73
   The Given array is: 17 42 19 7 27 24 17 54 73 
   The span between the same values in the array is: 6

   */
