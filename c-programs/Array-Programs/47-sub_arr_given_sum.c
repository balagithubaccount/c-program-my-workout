   //47. Write a C program to find a subarray with given sum from the given array.

   #include<stdio.h>
   void main()
   {
     int size, i, j, k, sum, given_sum;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int mainarr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&mainarr[i]);
     }
     printf("Enter the sum value: ");
     scanf("%d",&given_sum);
     printf("\n\nThe given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",mainarr[i]);
     }
     printf("\n");
     for(i=0; i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
          sum=0;
          for(k=i; k<=j; k++)
          {
            sum=sum+mainarr[k];
          }
          if(sum==given_sum)
          {
             printf("[%d...%d]--{",i,j);
             for(k=i; k<=j; k++)
             {
                printf("%d ",mainarr[k]);
             }
             printf("}\n");
          }
       }
     }
   }

   /*
   Output:

   Enter the size of the array: 8
   Enter the 8 elements: 3 4 -7 1 3 3 1 -4
   Enter the sum value: 7


   The given array is: 3 4 -7 1 3 3 1 -4 
   [0...1]--{3 4 }
   [0...5]--{3 4 -7 1 3 3 }
   [3...5]--{1 3 3 }
   [4...6]--{3 3 1 }

  */
