   //49. Write a C program to find majority element of an array.

   #include<stdio.h>
   void main()
   {
     int size, i, j, count, majority, temp=0;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     majority=size/2;
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("The given array is: ");
     for(i=0;i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size; i++)
     {  
       count=0;
       for(j=0; j<size; j++)
       {
         if(arr[i]==arr[j])
         {
            count++;
         }
       }
       if(count>majority)
       {
         printf("\nThe majority of the elements: %d\n",arr[i]);
         temp=1;
         break;
       }
     }
     if(temp==0)
     {
       printf("\nNo majority element found in the given array:\n");
     }
     
   }

/*Output:

   Enter the size of the array: 9
   Enter the 9 elements: 1 3 3 7 4 3 2 3 3 
   The given array is: 1 3 3 7 4 3 2 3 3 
   The majority of the elements: 3
*/
