//4. Write a C program to one array to another array copy elements

   #include<stdio.h>
   void main()
   {
     int n,i;
     printf("Enter the total number of elements store in array: ");
     scanf("%d",&n);
     int array1[n],copy_arr[n];
     printf("Enter the values:\n");
     for(i=0; i<n; i++)
     {
       scanf("%d",&array1[i]);
       copy_arr[i]=array1[i];
     }
     printf("You entered array is:\n");
     for(i=0; i<n; i++)
       printf("%d ",array1[i]);
     printf("\nCopied array is:\n");
     for(i=0; i<n; i++)
       printf("%d ",array2[i]);
     printf("\n"); 
   }

output:

Enter the total number of elements store in array: 6
Enter the values:
6 5 4 3 2 1
You entered array is:
6 5 4 3 2 1 
copied array is:
6 5 4 3 2 1 

