   //Write a C program to find the product of an array such that product is equal to the product of all the elements of arr[] except 
   //arr[i].

   #include <stdio.h>
   void main()
   {
     int size, i, j, prod;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int array[size],result[size];
     printf("Enter the %d elements : ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&array[i]);
     }
     for(i=0;i<size; i++)
     {
       prod=1;
       for(j=0; j<size; j++)
       {
         if(i!=j)
         {
           prod=prod*array[j];
         }
       }
       result[i]=prod;
     }
     printf("The given array is: ");
     for(i=0; i<size; i++)
     {
        printf("%d ",array[i]);
     }
     printf("\nThe product array is: ");
     for(i=0; i<size; i++)
     {
        printf("%d ",result[i]);
     }
     printf("\n");
   }

   /*
   Sample Output:

   Enter the array size: 6
   Enter the 6 elements : 1 2 3 4 5 6
   The given array is: 1 2 3 4 5 6 
   The product array is: 720 360 240 180 144 120
   */
