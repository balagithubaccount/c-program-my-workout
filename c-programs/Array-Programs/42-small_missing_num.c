   //42. Write a C program to find the smallest missing element from a sorted array...
    
   #include <stdio.h>
   void main()
   {
     int size, i, j, condition, temp,count=0, k=0;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size], misnum[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
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
     for(i=arr[0]; i<=arr[size-1]; i++)
     {
       condition=0;
       for(j=0; j<size; j++)
       {
         if(i==arr[j])
         {
           condition=1;
         }
       }
       if(condition!=1)
       {
         count++;
         misnum[k++]=i;
       }
     }
     printf("\nAfter the sorting given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\nThe missing numbers arr: ");
     for(i=0; i<count; i++)
     {
       printf("%d ",misnum[i]);
     }
     size=misnum[0];
     for(i=0; i<count; i++)
     {
       if(size>misnum[i])
       {
         size=misnum[i];
       }
     }
     printf("\nThe missing smallest element is: %d\n",size);
   }

   /*
   Enter the array size: 8
   Enter the 8 elements: 0 1 3 4 5 7 9 6

   After the sorting given array is: 0 1 3 4 5 6 7 9 
   The missing numbers arr: 2 8 
   The missing smallest element is: 2

   */
