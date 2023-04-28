  //43. Write a C program to print next greater lements in a given unsorted array.

   #include <stdio.h>
   void main()
   {
     int size, i, j, k, temp;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("Next Bigger Elements are: \n");
     for(i=0; i<size; i++)
     {
       j=arr[i];
       temp=0;
       for(k=i+1; k<size; k++)
       {
         if(j<arr[k])
         {
           printf("Next Bigger element of %d in the array is: %d\n",j,arr[k]);
           temp=1;
           break;
         }
       }
       if(temp!=1)
       {
         printf("Next Bigger element of %d in the array is: %d\n",j,-1);
       }
       
     }
   }

   /*
   Enter the array size: 6
   Enter the 6 elements: 5 3 10 9 6 13
   Next Bigger Elements are: 
   Next Bigger element of 5 in the array is: 10
   Next Bigger element of 3 in the array is: 10
   Next Bigger element of 10 in the array is: 13
   Next Bigger element of 9 in the array is: 13
   Next Bigger element of 6 in the array is: 13
   Next Bigger element of 13 in the array is: -1

   */
