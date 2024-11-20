   //Write a C program to rearrange an array such that even indx elements are smaller and odd index elements are greater than thir next...

   #include <stdio.h>
   void main()
   {
     int size, i, temp;
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
       if(i==(size-1))
       {
         arr[i]=arr[i];
       }
       else if(i%2==0)
       {
         if(arr[i]>arr[i+1])
         {
           temp=arr[i+1];
           arr[i+1]=arr[i];
           arr[i]=temp;
         }
       }
       else
       {
         if(arr[i]<arr[i+1])
         {
           temp=arr[i+1];
           arr[i+1]=arr[i];
           arr[i]=temp;
         }
       }
     }
     printf("\nThe Rearranged array is: \n");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\n");
   }

   /*
   Output:

   Enter the array size: 6
   Enter the 6 elements: 6 4 2 1 8 3
   The Given array is: 6 4 2 1 8 3 
   The Rearranged array is: 
   4 6 1 8 2 3 
   */
