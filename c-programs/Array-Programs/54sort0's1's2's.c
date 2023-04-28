   //54. Write a C program to sort an array of 0's, 1's, 2's....

   #include<stdio.h>
   void main()
   {
     int size, i, j, temp;
     printf("Enter the total number of elements: ");
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
         if(arr[i]>arr[j])
         {
           temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
         }
       }
     }
     printf("\nAfter the sorting the elements in the array are: ");
     for(i=0; i<size;i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\n");
   }
/*
   Output:

   Enter the total number of elements: 12
   Enter the 12 elements: 0 1 2 2 1 0 0  2 0 1 1 0
   The Given array is: 0 1 2 2 1 0 0 2 0 1 1 0 
   After the sorting the elements in the array are: 0 0 0 0 0 1 1 1 1 2 2 2 */
