   //Write a C program to find the maximum repeating number in a given array.

   #include <stdio.h>
   void main()
   {
     int size, i, j, k, temp, count, exit, max_repeat;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size); 
     for(i=0; i<size; i++)  
     {
       scanf("%d",&arr[i]);
     }
     temp=0;
     for(i=0; i<size; i++)
     {
       if(i>0)
       {
         exit=1;
         for(k=0; k<i; k++)
         {
           if(arr[i]==arr[k])
           {
             exit=0;
           }
         }
       }
       if(exit!=0)
       {
         count=0;
         for(j=0; j<size; j++)
         {
           if(arr[i]==arr[j])
           {
             count++;
           }
         }
         if(temp<count)
         {
           temp=count;
           max_repeat=arr[i];
         }
       }
     }
     printf("The maximum repeating number is: %d\n",max_repeat);
     printf("It's Frequency : %d\n",temp);
   }

   /*
   Sample Output:

   Enter the size of the array: 8
   Enter the 8 elements: 4 5 8 7 4 7 6 7
   The maximum repeating number is: 7
   It's Frequency : 3
   */
   