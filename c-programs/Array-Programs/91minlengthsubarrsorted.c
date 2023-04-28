   //91. Write a C program to find the minimum length of subarray such that sorting this subarray makes the whole array sorted.
   //(Given array is specific sized Unsorted array...)

   #include <stdio.h>
   void main()
   {
     int size, i, j, k=0, temp;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int mainarr[size],sortarr[size],resultarr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&mainarr[i]);
       sortarr[i]=mainarr[i];
     }
     printf("\nThe Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",sortarr[i]);
     }
     for(i=0; i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
         if(sortarr[i]>sortarr[j])
         {
           temp=sortarr[j];
           sortarr[j]=sortarr[i];
           sortarr[i]=temp;
         }
       }
     }
     for(i=0; i<size; i++)
     {
       if(mainarr[i]!=sortarr[i])
       {
         resultarr[k]=i;
         k++;
       }
     } 
     if(k!=0)
     {
       printf("\nThe minimum length of unsorted subarray which makes the given array sorted lies between the indeces %d to %d\n",resultarr[0],resultarr[k-1]);
     }
     if(k==0)
     {
       printf("\nThe given array is already sorted...\n");
     }
   }

   /*
   Output: 
 
   Enter the size of the array: 11
   Enter the 11 elements: 10 12 15 17 28 32 42 18 56 59 67

   The Given array is: 10 12 15 17 28 32 42 18 56 59 67 
   The minimum length of unsorted subarray which makes the given array sorted lies between the indeces 4 to 7
  
   */
