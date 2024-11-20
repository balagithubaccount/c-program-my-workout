   //105. Write a C program to find minumum number of swaps required to gather all elements less than or equal to k.
    //(where, k is some whole number...)
  
   #include <stdio.h>
   void main()
   {
     int size, i,j,k,s=0,count=0,index,temp;
     printf("Enter the array size: ");
     scanf("%d",&size);
     int arr[size],subarr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
      
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
       temp=0;
       for(j=0; j<s && s>0; j++)
       {
         if(arr[i]==subarr[j])
         {
           temp=1;
         }
       }//printf("\ntemp=%d\n",temp);
       if(temp==0 && arr[i]<=k)
       {
         subarr[s]=arr[i];
         s++;
         count++;
       }
     }
     //printf("\ncount=%d\n",count);
     for(i=0; i<s; i++)
     {
       for(j=0; j<size; j++)
       {
         if(subarr[i]==arr[j])
         {
           index=j;
           goto near;
         }
       }
       near:
       for(j=0; j<s; j++)
       {
         if(i!=j && (subarr[j]==arr[index+1] || subarr[j]==arr[index-1]))
         {
           count--;
         } printf("\ncount=%d\n",count);
       }
     }
     count--;
     printf("\nThe Minimum swap required is: %d\n",count);
   }

   /*
   Output:

   
   */
