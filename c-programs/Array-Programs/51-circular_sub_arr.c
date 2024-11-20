   //51. Write a C program to find the maximum circular subarray sum of a given array....

   #include<stdio.h>
   void main()
   {
     int size, i, j, k, l, sum, sum1, extra=0;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     sum=0;
     for(i=0; i<size; i++)
     {
     
       for(j=i; j<size; j++)
       {
          sum1=0;
          for(k=i; k<=j; k++)
          {
           
             sum1=sum1+arr[k];
             if(sum<sum1)
             {
                sum=sum1;
             }
          }
        
        }
        if(i>=2)
        {
        for(l=0; l<=extra; l++)
        { 
           sum1=sum1+arr[l];
           if(sum<sum1)
           {
              sum=sum1;
           }
        }  
          extra++;
        }
       
     }
     printf("\nThe given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\nThe maximum circular sum is: %d\n",sum);
   }

   /*
   Output:

   Enter the size of the array: 9
   Enter the 9 elements: 10 8 -20 5 -3 -5 10 -13 11

   The given array is: 10 8 -20 5 -3 -5 10 -13 11 
   The maximum circular sum is: 29
 */
