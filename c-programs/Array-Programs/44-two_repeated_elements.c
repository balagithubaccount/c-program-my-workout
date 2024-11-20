   //44. Write a C program to find the two repeating elements in a given array.

   #include<stdio.h>
   void main()  
   {
     int size, i, j, count, k=0,l=0,m,exit;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size],repeat[size],check[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     for(i=0; i<size; i++)
     {
       exit=0;
       for(m=0; m<l; m++)
       {
         if(arr[i]==check[m])
            exit=1;
       }
       count=0;
       if(exit!=1)
       {
       for(j=0; j<size; j++)
       {
         if(arr[i]==arr[j])
         {
           count++;
         }
       }
       if(count==2)
       {
          repeat[k++]=arr[i];
       }
       }
       check[l++]=arr[i];
     }
     printf("The repeating elements are: ");
     for(i=0; i<k; i++)
     {
       printf("%d ",repeat[i]);
     }
     printf("\n");
   }

   /*
   output:

   Enter the array size: 7
   Enter the 7 elements: 2 7 4 7 8 3 4
   The repeating elements are: 7 4
   */
