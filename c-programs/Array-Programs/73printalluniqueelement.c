   //Write a C program to print all unique elements of an unsorted array...
  
   #include<stdio.h>
   void main()
   {
     int size, i, j, k=0, temp;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size],check[size];
     printf("Enter the %d Elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("The given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     check[k]=arr[0];
     k++;
     for(i=1; i<size; i++)
     {
        temp=0;
        for(j=0; j<k; j++)
        {
          if(arr[i]==check[j])
          {
             temp=1;
          }
        }
        if(temp==0)
        {
          check[k++]=arr[i];
        }
     }
     printf("\nUnique Elements in the given array are: ");
     for(i=0; i<k; i++)
     {
       printf("%d ",check[i]);
     }
     printf("\n");
   }

   /*
   Output:

   Enter the size of the array: 11
   Enter the 11 Elements: 1 5 8 5 7 3 2 4 1 6 2
   The given array is: 1 5 8 5 7 3 2 4 1 6 2 
   Unique Elements in the given array are: 1 5 8 7 3 2 4 6   
   */
