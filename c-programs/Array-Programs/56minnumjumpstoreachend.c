   //56. Write a C program to return the minimum number of jumps to reach the end of the array.

   #include<stdio.h>
   void main()
   {
     int size, i, j, index=0, big, swap;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements only using (1 to 9): ",size);   //not using zero and negative values
     for(i=0; i<size; i++)
     {
        scanf("%d",&arr[i]);
     }
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     i=swap=0;

     start:
     if(i==0 && index+arr[i]>=size-1 )
     {
       swap++;
       goto end;
     }
     if(arr[i]==1)  
     {
       swap++;
       i++; 
       index=i;
       if(i+arr[i]>=(size-1))
       {
         swap++;
         goto end;
       }
       goto start;
     }
     
     if(arr[i]>1)
     {
       if(index+arr[i]>=size-1){swap++;goto end;}
       big=arr[i+1];                   //printf("\nbig=%d\n",big);
       index=i+1;
       for(j=i+1; j<=i+arr[i]; j++)
       {
         if(big<=arr[j])
         {
           big=arr[j];
           index=j;
         }
         
       }                             // printf("\nbig=%d\n",big); 
                                      // printf("\nindex=%d\n",index);                             
       if((index+big)>=(size-1))
       {
         swap+=2;
         goto end;
       }
       else
       {
         swap++;
         i=index;
         goto start;
       }
     }
     end:
     printf("\nThe minimum number of jumps is required to reach end is: %d\n",swap);
   }
/*
   Output:

   Enter the size of the array: 11
   Enter the 11 elements only using (1 to 9): 1 3 5 8 9 2 1 4 6 9 1
   The Given array is: 1 3 5 8 9 2 1 4 6 9 1 
   The minimum number of jumps is required to reach end is: 3
*/
