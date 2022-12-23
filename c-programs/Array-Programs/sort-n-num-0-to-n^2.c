   //Write a C program to sort 'n' numbers in range from 0 to n^2...

   #include <stdio.h>
   void main()
   {
     int size, i, j, temp,swap;
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
     printf("\nAfter the sorted array is: ");
     start:
     swap=0;
     for(i=0,j=i+1; j<size; j++, i++)
     {
       if(arr[i]>arr[j])
       {
         swap++;
         temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
       }
     }
     if(swap!=0)
     {
       goto start;
     }
     else
     {
       for(i=0; i<size; i++)
       {
         printf("%d ",arr[i]);
       }
       printf("\n");
     }
   
   }

   /*
   Sample Output:

   Enter the size of the array: 6
   Enter the 6 elements: 53 32 19 48 25 56
   The Given array is: 53 32 19 48 25 56 
   After the sorted array is: 19 25 32 48 53 56 
   */
