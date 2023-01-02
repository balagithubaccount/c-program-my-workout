   //Write a C program to check if an array can be splitted in such a position that, the sum of left side of the splitting is equal to the sum of the right side.

   #include <stdio.h>
   void main()
   {
     int size, i, j, temp=0, index, sumleft, sumright;
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
     for(i=0; i<size; i++)  
     {
       sumleft=sumright=0;
       for(j=0; j<=i; j++)
       {
         sumleft=sumleft+arr[j];
       }
       for(j=i+1; j<size; j++)
       {
         sumright=sumright+arr[j];
       }
       if(sumleft == sumright)
       {
         index=i;
         temp=1;
       }
     }
     if(temp==0)
     {
       printf("\nNot possible equal sum...\n");
     }
     else
     {
       printf("\nThe array can be split in a position where the sum of both side are Equal \n");
     }
     
     if(temp==1)
     {
       printf("Left side elements are: {");
       for(i=0; i<=index; i++)
       {
         printf("%d ",arr[i]);
       }
       printf("}\nRight Side Elements are: {");
       for(i=index+1; i<size; i++)
      {
        printf("%d ",arr[i]);
      }     
      printf("}\n");
     }
   }

   /*

   Output:

   Enter the size of the array: 9
   Enter the 9 elements: 1 3 3 8 4 3 2 3 3
   The Given array is: 1 3 3 8 4 3 2 3 3 
   The array can be split in a position where the sum of both side are Equal 
   Left side elements are: {1 3 3 8 }
   Right Side Elements are: {4 3 2 3 3 }

  */
