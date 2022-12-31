   //Write a C program to find the index of first peak element in a given array.
  
   #include <stdio.h>
   void main()
   {
     int size, i, p=0, temp=0;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size],peak[size];
     printf("Enter the %d Elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }   
     printf("\n");
     for(i=0; i<size; i++)
     {
       if(i>0 && i<size-1   && arr[i]>arr[i-1] && arr[i]>arr[i+1])
       {
         peak[p]=i;
         p++;
         temp=1;
       }
       if (i==0 && arr[i]>arr[i+1])
       {
         peak[p]=i;
         p++;
         temp=1;
       }
       if(i==(size-1 ) && arr[i-1]<arr[i])
       {
         peak[p]=i;
         p++;
         temp=1;
       }
     }
     if(temp==0)
     {
       goto end;
     }
     printf("\nThe Index of first peak element in the array is: %d\n",peak[0]);
     printf("The Indeces of the peak elements in the arrays are: ");
     for(i=0; i<p; i++)
     {
       printf("%d ",peak[i]);
     }
     printf("\nThe Peak Elements are: ");
     for(i=0; i<p; i++)
     {
       printf("%d ",arr[peak[i]]);
     }
     printf("\n");
     end:
     if(temp==0)
     printf("\nThere are not found peak elements in an array.\n");
   }
   
   /*
   Output:

   Enter the array size: 9
   Enter the 9 Elements: 5 12 13 20 16 19 11 7 25
   The Given array is: 5 12 13 20 16 19 11 7 25 

   The Index of first peak element in the array is: 3
   The Indeces of the peak elements in the arrays are: 3 5 8 
   The Peak Elements are: 20 19 25 
   */
