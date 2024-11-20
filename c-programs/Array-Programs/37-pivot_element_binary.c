   //37. Write a C program to find the pivot element of a sorted and rotated array using binary search...

   #include<stdio.h>
   void main()
   {
     int size, i, start, end, mid, pivot,temp=0;
     printf("Enter the array size: ");\
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d Elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("\nThe given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     start=0, end=size-1;
     START:
     mid=(start+end)/2;
    // printf("\nmid=%d\n",mid);
     if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1] )
     {
       pivot=arr[mid];
       temp=1;
       goto END;
     }
     else if(arr[mid]>arr[mid+1])
     {
        pivot=arr[mid+1];
        temp=2;
        goto END;
     }
     else
     {
       if(arr[start]>arr[mid])
       {
         end=mid;
         // printf("\nend=%d\n",end);
         goto START;
       }
       else
       {
         start=mid;
         //printf("\nstart=%d\n",start);
         goto START;
       }
     }
     END:
     if(arr[start]>pivot && pivot<arr[end])
     {
     printf("\nThe Pivot element is: %d\n",pivot);
     }
     else{
         if(temp==1){start=mid;goto START;}  
     }
   }

   /*
   Output:

   Enter the array size: 11
   Enter the 11 Elements: 14 23 7 9 3 6 18 22 16 36
   37

   The given array is: 14 23 7 9 3 6 18 22 16 36 37 
   The Pivot element is: 3

   */

