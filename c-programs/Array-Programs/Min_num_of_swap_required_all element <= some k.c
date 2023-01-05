   //Write a C program to find minumum number of swaps required to gather all elements less than or equal to k. (where, k is some whole number...)
   
   #include <stdio.h>
   void main()
   {
     int size, i,j,k,count=0,temp;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size],copyarr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
       copyarr[i]=arr[i];
     }
     printf("Enter the k value: ");
     scanf("%d",&k);
     printf("\nThe Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size; i++)
     {
       if(arr[i]>k)
       {
         for(j=i+1; j<size; j++)
         {
           if(k>=arr[j])
           {
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
             break;
           }
         }
       }
     }
     printf("\nModified array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     } printf("\n");
     for(i=0; i<size; i++)
     {
       if(arr[i]<copyarr[i] && k<copyarr[i])
       {
         count++;
       }
     }
     printf("\nTotal minimum swap required is: %d\n",count);
   }
  
   /*
   Output:

   Enter the array size: 7
   Enter the 7 elements: 2 7 9 5 8 7  4
   Enter the k value: 7

   The Given array is: 2 7 9 5 8 7 4 
   Modified array is: 2 7 5 7 4 9 8 

   Total minimum swap required is: 2

  */
