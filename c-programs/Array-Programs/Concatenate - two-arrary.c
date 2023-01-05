   //Write a C program to concatenate two given arrays of integers...

   #include<stdio.h>
   void main()
   {
     int size1, size2, i,j;
     printf("Enter the First array size: ");
     scanf("%d",&size1);
     printf("Enter the second array size: ");
     scanf("%d",&size2);
     int first[size1],second[size2], merged[size1+size2];
     printf("Enter the %d elements for 1st array: ",size1);
     for(i=0; i<size1; i++)
     {
       scanf("%d",&first[i]);
     }
     printf("\nEnter the %d elements for 2nd array: ",size2);
     for(i=0; i<size2; i++)
     {
       scanf("%d",&second[i]);
     }
     printf("\nFirst array is: ");  
     for(i=0; i<size1; i++)
     {
       printf("%d ",first[i]);
     }
     printf("\nSecond array is: ");  
     for(i=0; i<size2; i++)
     {
       printf("%d ",second[i]);
     }
     for(i=0; i<size1+size2; i++)
     {
       if(i<size1)
       {
         merged[i]=first[i];
       }
       else
       {
         merged[i]=second[i-size1];
       }
     }
     printf("\nThe merged array is: ");
     for(i=0; i<size1+size2; i++)
     {
       printf("%d ",merged[i]);
     }       
     printf("\n");
   }

   /*
   Output:

   Enter the First array size: 6
   Enter the second array size: 6
   Enter the 6 elements for 1st array: 10 20 30 40 50 60 

   Enter the 6 elements for 2nd array: 70 80 90 100 110 120

   First array is: 10 20 30 40 50 60 
   Second array is: 70 80 90 100 110 120 
   The merged array is: 10 20 30 40 50 60 70 80 90 100 110 120
   */
