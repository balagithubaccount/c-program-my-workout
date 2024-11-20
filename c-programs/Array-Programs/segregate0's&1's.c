   //To segregate 0's and 1's in array.

   #include<stdio.h>
   void main()
   {
     int size, i, count0=0,count1=0, zero=0, one=1;
     printf("Enter array size: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements, for only 0's and 1's:\n",size);
     for(i=0; i<size; i++)
     {
       printf("Element -%d-",i);
       scanf("%d",&arr[i]);
       if(arr[i]==0)
         count0++;
       else
         count1++;
     }
     printf("The given array is: ");
     for(i=0; i<size; i++)
       printf("%d ",arr[i]);printf("\n");
     printf("After the segregate of array is: ");
     for(i=0; i<count0; i++)
       printf("%d ",zero);
     for(i=0; i<count1; i++)
       printf("%d ",one);
     printf("\n");
   }

   Output:
  
   Enter array size: 9
   Enter the 9 elements, for only 0's and 1's:
   Element -0-1
   Element -1-0
   Element -2-1
   Element -3-0
   Element -4-0
   Element -5-1
   Element -6-0
   Element -7-1
   Element -8-1
   The given array is: 1 0 1 0 0 1 0 1 1 
   After the segregate of array is: 0 0 0 0 1 1 1 1 1
