   //106. Write a C program to convert the array in such a way that double its value and replace the next number with 0 
   //if currect and next element are same and rearrange the array such that all 0's shifted to the end...

   #include <stdio.h>
   void main()
   {
     int size, i, j, temp;
     printf("Enter the array size: ");
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
       if(arr[i]!=0 && arr[i]==arr[i+1])
       {
         arr[i]=arr[i]+arr[i+1];
         arr[i+1]=0;
       }
     }
     for(i=0; i<size; i++)
     {
       if(arr[i]==0)
       {
         for(j=i+1; j<size; j++)
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
     printf("\nThe Converted new array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\n");
   }

   /*
   Output: 

   Enter the array size: 10
   Enter the 10 elements: 0 3 3 3 0 0 7 7 0 9
   The Given array is: 0 3 3 3 0 0 7 7 0 9 
   The Converted new array is: 6 3 14 9 0 0 0 0 0 0 
   */
