   //64. Write a C program to find the median of two sorted arrays of same size...

   #include <stdio.h>
   void main()
   {
     int size1, size2, i, j, n, temp;
     float median;
     printf("Enter the first array size: ");
     scanf("%d",&size1);
     printf("Enter the second array size: ");
     scanf("%d",&size2);
     n=size1+size2;
     int arr1[size1],arr2[size2], merge[n];
     printf("Enter the %d elements for array 1: ",size1);
     for(i=0; i<size1; i++)
     {
       scanf("%d",&arr1[i]);
       merge[i]=arr1[i];
     }
     printf("Enter the %d elements for array 2: ",size2);
     for(i=0; i<size2; i++)
     {
       scanf("%d",&arr2[i]);
       merge[size1++]=arr2[i];
     }
     for(i=0; i<n; i++)
     {
       for(j=i+1; j<n; j++)
       {
         if(merge[i]>merge[j])
         {
           temp=merge[j];
           merge[j]=merge[i];
           merge[i]=temp;
         }
       }
     }
     if(n%2==1)
     {
       median=merge[n/2];
     }
     else
     {
       n=n/2;
       median=(float)(merge[n-1]+merge[n])/2;
     }
     printf("The Median of the two sorted arrays is: %.1f\n",median);
   }

/*
   Output:

   Enter the first array size: 5
   Enter the second array size: 5
   Enter the 5 elements for array 1: 1 5 13 24 35
   Enter the 5 elements for array 2: 3 8 15 17 32
   The Median of the two sorted arrays is: 14.0

*/
