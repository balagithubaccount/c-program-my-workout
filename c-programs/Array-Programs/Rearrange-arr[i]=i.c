   //Write a C program to rearrange an array such that arr[i]=i; (Array size N) So elements range 0 to N-1 not present the given range element that position has -1.

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
     printf("The Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size; i++) 
     {
       temp=0;
       for(j=i; j<size; j++)
       {
         if(arr[j]==i)
         {
           temp=1;
           goto swap;
         }
       }
       if(temp==0)
       {
         for(j=i; j<size; j++)
         {
           if(arr[j]<0)
           {
             goto swaped;
           }
         }
         for(j=i; j<size; j++)
         {
           if(arr[j]<j)
           {
             goto swaped;
           }
         }
       }
       swap:
       if(temp==1)
       {
         swaped:
         temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
       }
     }
     printf("\nThe New array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\n");
   }

   /*
   Output:

   Enter the array size: 10
   Enter the 10 elements: 2 5 -1 6 -1 8 7 -1 9 1
   The Given array is: 2 5 -1 6 -1 8 7 -1 9 1 
   The New array is: -1 1 2 -1 -1 5 6 7 8 9    
   */
