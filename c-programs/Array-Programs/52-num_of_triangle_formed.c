   //52. Write a C program to count the number of triangles can be formed from a given array.

   #include<stdio.h>
   void main()
   {
     int size, i, j, k, count=0;
     printf("Enter the number of elements in array: ");
     scanf("%d",&size);
     int array[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&array[i]);
     }
     printf("The given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",array[i]);
     }
     printf("\nNumber of possible triangles can be formed from the array is: ");
     for(i=0; i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
         for(k=j+1; k<size; k++)
         {
            if(array[i]+array[j]>array[k]  && array[i]+array[k]>array[j] && array[j]+array[k]>array[i])
            { count++; }
         }
       }
     }
     printf("%d\n",count);
   }
/*
   Output:

   Enter the number of elements in array: 5
   Enter the 5 elements: 6 18 9 7 10
   The given array is: 6 18 9 7 10
   Number of possible triangles can be formed from the array is: 5
*/
