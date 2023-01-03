   //Write a C program to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on.

   #include<stdio.h>
   void main()
   {
      int size, i,j,temp,pos;
      printf("Enter the array size: ");
      scanf("%d",&size);

      int arr[size], result[size];

      printf("Enter the elements: \n");
      for(i=0; i<size; i++)
      {
        printf("%d-element: ",i);
        scanf("%d",&arr[i]);
      }

      printf("The given array is: \n");
      for(i=0; i<size; i++)
      {
        printf("%d ",arr[i]);
      }
      for(i=0; i<size; i++)
      {
         for(j=i+1; j<size; j++)
         {
           if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
         }
      }
      temp = 0;
      for(i=0,j=size-1; i<size/2 || i==j ; i++, j--)
      {
          result[temp++] = arr[i];
          result[temp++] = arr[j];
      }

      printf("\nThe new array is:\n");
      for(i =0; i<size; i++)
      {
        printf("%d ",result[i]);
      }
      printf("\n");
   }

/*
  Output:

  Enter the array size: 9
  Enter the elements: 
  0-element: 5
  1-element: 8
  2-element: 1
  3-element: 4
  4-element: 2
  5-element: 9
  6-element: 3
  7-element: 7
  8-element: 6
  The given array is: 
  5 8 1 4 2 9 3 7 6 
  The new array is:
  1 9 2 8 3 7 4 6 5 
*/
