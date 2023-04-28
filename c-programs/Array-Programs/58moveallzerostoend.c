   //58. Write a C program to move all zeroes to the end of a given array...
  
   #include <stdio.h>
   void main()
   {
     int size, i, temp, exit,j;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int n1, n2; n1=n2=size;
     int arr[size];
     printf("Enter the %d Elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("\n\nThe given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size; i++)
     {
       exit=0;
       if(arr[i]==0)
       { 
          size--;
          for(j=i+1; exit==0 && j<n1 ; j++)
          {
            if( arr[j]!=0 )
            {
              exit=1;
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp;            
              break;
            }
          }
       }
     }
     printf("\nThe new array is: ");
     for(i=0; i<n2; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\n");
   }
/*
   Output:

   Enter the size of the array: 10 
   Enter the 10 Elements: 2 5 7 0 4 0 7 -5 8 0


   The given array is: 2 5 7 0 4 0 7 -5 8 0 
   The new array is: 2 5 7 4 7 -5 8 0 0 0 



                        OR Below code refer is better 



   //58. Write a C program to move all zeroes to the end of a given array...
  
   #include <stdio.h>
   void main()
   {
     int size, i, temp, count=0,j;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int n1, n2; n1=n2=size;
     int arr[size];
     printf("Enter the %d Elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
       if(arr[i]==0)count++;
     }
     printf("\ncount is = %d\nThe given array is: ",count);
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size-count; i++)
     {
       if(arr[i]==0 )
       { 
          for(j=n1-1; j>=0 ; j--)
          {
             if(arr[j]!=0)
             {
              temp=arr[j]; 
              arr[j]=arr[i];
              arr[i]=temp;        
              break;
             }  
          }
       }
     }

     printf("\nThe new array is: ");
     for(i=0; i<n2; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\n");
   }

   Output:

   Enter the size of the array: 10
   Enter the 10 Elements:  2 5 7 8 4 -5 7 0 0 0

   count is = 3
   The given array is: 2 5 7 8 4 -5 7 0 0 0 
   The new array is: 2 5 7 8 4 -5 7 0 0 0 

*/
