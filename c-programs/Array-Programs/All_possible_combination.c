   //Write a C program to print all possible combinations of 4 elements in a given array...

   #include<stdio.h>
   void main()
   {
     int size, i, j, k, l, terms;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("\nThe Given array is: ");
     for(i=0;  i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\nTerms : %d\n",4);
     for(i=0; i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
         for(k=j+1; k<size; k++)
         {
           for(l=k+1; l<size; l++)
           {
             printf("%d %d %d %d\n",arr[i],arr[j],arr[k],arr[l]);
           }
         }
       }
     }
     printf("\n");
   }


   /*
   Sample Output:

   Enter the size of the array: 5
   Enter the 5 elements: 1 5 4 6 8

   The Given array is: 1 5 4 6 8 
   Terms : 4
   1 5 4 6
   1 5 4 8
   1 5 6 8
   1 4 6 8
   5 4 6 8
*/