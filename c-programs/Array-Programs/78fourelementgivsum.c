   //78. Write a C program to find four array elements whose sum is equal to given number...

   #include <stdio.h>
   void main()
   {
     int size, i, j, k, l, giv_num, temp;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++) 
     {
       scanf("%d",&arr[i]);
     }
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\nEnter the number for sum of four elements in array: ");
     scanf("%d",&giv_num);
    
     temp=0;
     for(i=0; i<size; i++)
     {
       for(j=i+1; j<size; j++)
       {
         for(k=j+1; k<size; k++)
         {
           for(l=k+1; l<size; l++)
           {
             if(arr[i]+arr[j]+arr[k]+arr[l]==giv_num)
             {
               printf("The Elements are: ");
               printf("%d + %d + %d + %d = %d\n",arr[i],arr[j],arr[k],arr[l],giv_num);
               temp=1;
               goto end;
             }
           }
         }
       }
     }
     end:
     if(temp==0)
     {
       printf("The given number %d does not exist sum of Elements of array.\n",giv_num);
     }
   }

   /*
   Output:

   Enter the size of the array: 10
   Enter the 10 elements: 3 7 1 9 15 14 6 2 5 7
   The Given array is: 3 7 1 9 15 14 6 2 5 7 
   Enter the number for sum of four elements in arr: 37
   The Elements are: 3 + 15 + 14 + 5 = 37
 
   */