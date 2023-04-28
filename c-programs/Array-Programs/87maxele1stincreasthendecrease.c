   //87. Write a C program to find the maximum element in an array which is first ncreasing and then decreasing.

   #include <stdio.h>
   void main()
   {
     int size, i, big, pos;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("\nThe Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     big=arr[0];pos=0;
     for(i=0; i<size; i++)
     {
       if(big<arr[i])
       {
         big=arr[i];
         pos=i;
       }
     }
     if(pos==0)
     {
       printf("\nThe Maximum Element which is initially then not decreasing is: %d\n",big);
     }
     else if(pos==(size-1))
     {
       printf("\nThe maximum element which is last element is: %d\n",big);
     }
     else
     {
       printf("\nThe maximum element which is increasing then decreasing is: %d\n",big);
     }
   }

   /*
   Output:

   Enter the size of the array: 8 
   Enter the 8 elements: 2 7 12 25 4 57 27 44

   The Given array is: 2 7 12 25 4 57 27 44 
   The maximum element which is increasing then decreasing is: 57
   */
