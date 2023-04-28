   //38. Write a C program to merge one sorted array into another sorted array. 

   #include <stdio.h>
   void main()
   {
     int size1, size2, totalmerge, temp, i, j=0;
     printf("Enter the size of the first array: ");
     scanf("%d",&size1);
     printf("Enter the size of the second array: ");
     scanf("%d",&size2);
     totalmerge=size1+size2;
     int array1[size1], array2[size2],merge[totalmerge];
     printf("Enter the %d elements for array1: ",size1); 
     for(i=0; i<size1; i++)
     {
       scanf("%d",&array1[i]);
     }
     printf("Enter the %d elements for array2: ",size2); 
     for(i=0; i<size2; i++)
     {
       scanf("%d",&array2[i]);
     }  
     for(i=0; i<totalmerge; i++)
     {
       if(i<size1)
       { merge[i]=array1[i];}
       else
       { merge[i]=array2[j++]; }
     }
     for(i=0; i<totalmerge; i++)
     {
       for(j=i+1; j<totalmerge; j++)
       {
         if(merge[i]>merge[j])
         {
            temp=merge[j];
            merge[j]=merge[i];
            merge[i]=temp;
         }
       }
     }
     printf("\n----------------------------------\n");
     printf("First Array is: ");
     for(i=0; i<size1; i++)
     { printf("%d ",array1[i]);}
    
     printf("\nSecond Array is: ");
     for(i=0; i<size2; i++)
     { printf("%d ",array2[i]);}
 
     printf("\nMerged array is: ");
     for(i=0; i<totalmerge; i++)
     { printf("%d ",merge[i]);}
     
     printf("\n");
   }

   /*
   Enter the size of the first array: 7
   Enter the size of the second array: 6
   Enter the 7 elements for array1: 10 12 14 16 18 20 22
   Enter the 6 elements for array2: 11 13 15 17 19 21

   ----------------------------------
   First Array is: 10 12 14 16 18 20 22 
   Second Array is: 11 13 15 17 19 21 
   Merged array is: 10 11 12 13 14 15 16 17 18 19 20 21 22 

   */
