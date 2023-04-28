   //48. Write a C program to find if a given integer x appears more than n/2 times ina sorted array of n integers.
   
   #include<stdio.h>
   void main()
   {
     int size, i, giv_num, n ,count=0;
     printf("Enterr the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     n=size/2;
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("Enter the number for to find appears more than n/2 times: ");
     scanf("%d",&giv_num);
     for(i=0; i<size; i++)
     {
       if(giv_num==arr[i])
       {
          count++;
       }
     }
     if(count>n)
     {  
       printf("%d appears more than %d times in the given array.\n",giv_num,n);
     }
     else
     {
       printf("%d does not appears more than %d times in the given array.\n",giv_num,n);
     }
   }

   /* 
   Output:

   Enterr the size of the array: 9
   Enter the 9 elements: 1 3 3 5 4 3 2 3 3
   Enter the number for to find appears more than n/2 times: 3
   3 appears more than 4 times in the given array.
*/

