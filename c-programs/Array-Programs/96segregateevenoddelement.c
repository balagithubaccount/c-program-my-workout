   //96. Write a C program to segregate even and odd elements on an array...
   
   #include<stdio.h>
   void main()
   {
     int size, i, temp, j;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the %d elements: ",size);
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("The Givern array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     for(i=0; i<size; i++)
     {
       if(arr[i]%2==1)
       {
         for(j=i+1; j<size; j++)
         {
           if(arr[j]%2==0)
           {
             temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
             break;
           }
         }
       }
     }
     printf("\nThe array after segregation is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     printf("\n");
   }

   /*
   Output: 

   Enter the size of the array: 9
   Enter the 9 elements: 17 42 19 7 27 24 30 54 73
   The Givern array is: 17 42 19 7 27 24 30 54 73 
   The array after segregation is: 42 24 30 54 27 17 19 7 73  
    */
