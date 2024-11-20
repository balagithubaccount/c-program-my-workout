   //55. Write a C program to check whether an array is subset of another array.

   #include <stdio.h>
   void main()
   {
     int size1, size2, i, j, temp, n, big, count=0;
     printf("Enter the first array size: ");
     scanf("%d",&size1);
     printf("Enter the second array size: ");
     scanf("%d",&size2);
     int first[size1], second[size2];
     n = (size1>size2)?size2:size1;
     if(size1>size2){big=size1;}
     else{big=size2;}
     printf("Enter the %d elements for first array: ",size1);
     for(i=0; i<size1; i++)
     {
        scanf("%d",&first[i]);
     }
     printf("Enter the %d elements for second array: ",size2);
     for(i=0; i<size2; i++)
     {
        scanf("%d",&second[i]);
     }
     printf("\n\nThe given first array is: ");
     for(i=0; i<size1; i++){ printf("%d ",first[i]);}
     printf("\nThe given second array is: ");
     for(i=0; i<size2; i++){ printf("%d ",second[i]);}
     for(i=0; i<n; i++)
     {
       for(j=0; j<big; j++)
       {
          if(n==size1 && first[i]==second[j])
          { count++; }
          if(n==size2 && second[i]==first[j])
          { count++; }
       }
     }
     if(count==size2)
     {
       printf("\nThe second array is the subset of first array.\n");
     }
     else if(count==size1)
     {
       printf("\nThe first array is the subset of second array.\n");
     }
     else
     {
       printf("\nAn array's are not a subset of another array.\n");
     }
   }
/*
   Output:

   Enter the first array size: 9
   Enter the second array size: 5
   Enter the 9 elements for first array: 4 8 7 11 6 9 5 0 2
   Enter the 5 elements for second array: 5 4 2 0 6


   The given first array is: 4 8 7 11 6 9 5 0 2 
   The given second array is: 5 4 2 0 6 
   The second array is the subset of first array.
*/
