   //45. Write a C program to find two elements whose sum is closest to zero.

   #include<stdio.h>
   void main()
   {
     int size, i, j, posi, posj, sum, sum1,near=0,sol;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     sum=arr[0]+arr[1];
     for(i=0; i<size; i++)
     {
       for(j=0; j<size; j++)
       {
         if(i!=j)
         {
           sum1=arr[i]+arr[j];
         }
         if(sum1<0)
         {
           sum1=sum1*(-1);
           near=-1;
         }else
          {near=1;}
         if(sum>sum1)
         {
           sum = sum1;
           posi=arr[i];
           posj=arr[j];
          if(near==-1){sol=sum*(-1);}
          else{sol=sum;}
         }
       }
     }
     printf("\nThe given array is: "); 
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\nThe Pair of elements whose sum is minimum are: [%d, %d]\n",posi,posj);
     printf("The nearest zero sum value is: %d\n",sol);

     
   }
/*
   Enter the array size: 10
   Enter the 10 elements: 38 44 63 -51 -35 19 84 -69 4 -46

   The given array is: 38 44 63 -51 -35 19 84 -69 4 -46 
   The Pair of elements whose sum is minimum are: [44, -46]
   The nearest zero sum value is: -2

*/
