   //Write a C program to checks whether the elements in an unsorted array appears consecutively or not.

   #include<stdio.h>
   void main()
   {
     int size, n, i, j, k=1, count, big, small, main=0;
     printf("Enter the total number of times to check array's: ");
     scanf("%d",&n);

     start:
     printf("\nEnter the size of the %d array: ",k);
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements for %d array: ",size,k);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("\nThe Given %d array is: ",k);
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     small=big=arr[0];
     for(i=0; i<size; i++)
     {
       if(small>arr[i])
       {
         small=arr[i];
       }
       if(big<arr[i])
       {
         big=arr[i];
       }
     }
     for(i=0; i<size; i++)
     {
       count=0;
       for(j=0; j<size; j++)
       {
         if(arr[i]==arr[j]){count++;}
       }
       if(count>1){goto repeat;}
     }
     for(i=small; i<=big; i++)
     {
       main=0;
       for(j=0; j<size; j++)
       {
         if(i==arr[j])
         {
           main=1;
         }
       }
       if(main!=1)
       { 
         repeat:
         printf("\nThe appearence of elements in the %d array are not consecutive.\n",k);
         break;
       }
     }
     if(main==1 && count==1)
     {
       printf("\nThe appearence of elements in the %d array are consecutive.\n",k);
     }
     k++;
     if(k<=n)
     { goto start;}
     printf("\nProgram is finished\n");
   }
 
   /*
   Sample Output:
 
   Enter the total number of times to check array's: 3

   Enter the size of the 1 array: 6
   Enter the 6 elements for 1 array: 7 4 3 5 6 2

   The Given 1 array is: 7 4 3 5 6 2 
   The appearence of elements in the 1 array are consecutive.

   Enter the size of the 2 array: 6
   Enter the 6 elements for 2 array: 7 4 4 5 6 2

   The Given 2 array is: 7 4 4 5 6 2 
   The appearence of elements in the 2 array are not consecutive.

   Enter the size of the 3 array: 6   
   Enter the 6 elements for 3 array: 7 4 9 5 6 3

   The Given 3 array is: 7 4 9 5 6 3 
   The appearence of elements in the 3 array are not consecutive.

   Program is finished
   */