   //46. Write a C program to find the smallest positive number missing from an unsorted array...

   #include<stdio.h>
   void main()
   {
     int size, i, j, in;
     printf("Enter the total number of inputs in array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     for(i=1; i<=size; i++)
     {
       in=0;
       for(j=0; j<size; j++)
       {
          if(arr[j]==i)
          {
            in=1;
          }
       }
       if(in==0)
       {
         printf("The smallest missing number is: %d\n",i);
         break;
       }
     }
   }

   /*
   Output:

   Enter the total number of inputs in array: 9
   Enter the 9 elements: 3 1 4 10 -5 15 2 -10 -20
   The smallest missing number is: 5

   */
