   //Write a C program to Rearrange positive and negative numbers alternatively in a given array...

   #include<stdio.h>
   void main()
   {
     int size, i, j, temp;
     printf("Enter the array size: ");
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
     for(i=0; i<size; i++)
     {
       if(i%2==0)
       {
         if(arr[i]>=0)
         {
           for(j=i+1; j<size; j++)
           {
             if(arr[j]<0)
             {
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
               break;
             }
           }
         }
       }
       if(i%2==1)
       {
         if(arr[i]<0)
         {
           for(j=i+1; j<size; j++)
           {
             if(arr[j]>=0)
             {
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
               break;
             }
           }
         } 
       }
     } 
     printf("\nThe rearranged array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     } 
     printf("\n");
   }

   /*
   Output: 

   Enter the array size: 11
   Enter the 11 elements: -4 8 -5 -6 5 -9 7 1 -21 -11 19

   The Given array is: -4 8 -5 -6 5 -9 7 1 -21 -11 19 
   The rearranged array is: -4 8 -5 5 -6 7 -9 1 -21 19 -11 
   
   */
