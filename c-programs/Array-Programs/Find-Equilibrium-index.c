   //Write a C program to find the equilibrium index of an array...
   
   #include <stdio.h>
   void main()
   {
     int size, i, j, sumright, sumleft, equ_index,temp;
     printf("Ente the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("\nThe Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     temp=0;
     for(i=1; i<size-1; i++)
     {
       sumright=sumleft=0;
       for(j=i-1; j>=0; j--)
       {
         sumright=sumright+arr[j];
       }
       for(j=i+1; j<size; j++)
       {
         sumleft=sumleft+arr[j];
       }
       if(sumright==sumleft)
       {
         equ_index=i;
         temp=1;
         break;
       }
     }
     if(temp==1)
     {
       printf("\nThe Equilibrium index found at: %d\n",equ_index); 
     }
     else
     {
       printf("\nThus no such a Equilibrium index found at the array\n");
     }

   }

   /*
   Sample Output:
  
   Ente the size of the array: 8
   Enter the 8 elements: 0 -4 7 -4 -2 6 -3 0

   The Given array is: 0 -4 7 -4 -2 6 -3 0 
   The Equilibrium index found at: 5
   */