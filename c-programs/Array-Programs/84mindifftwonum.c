   //84. Write a C program to find the minimum distance between two numbers in a given array...

   #include <stdio.h>
   void main()
   {
     int size, i, j, k, l, n, diff, num1, num2, temp,mindistance;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size]; mindistance=size;
     printf("Enter the Elements: ");
     for(i=0; i<size; i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("Enter the 1st number for find distance: ");
     scanf("%d",&num1);
     printf("Enter the 2nd number for find distance: ");
     scanf("%d",&num2);
     n=0;
     printf("\nThe Given array is: ");
     for(i=0; i<size; i++)
     {
       printf("%d ",arr[i]);
     }
     Start:
     for(i=n; i<size; i++)
     {
       if(num1==arr[i])
       {
         j=i;
         temp=1;
         break;
       }
       if(num2==arr[i])
       {
         j=i;
         temp=2;
         break;
       }
     }
     for(k=j+1; k<size; k++)
     {
       if(temp==1)
       {
         if(num2==arr[k])
         {
           l=k;
           break;
         }
       }
       if(temp==2)
       {
         if(num1==arr[k])
         {
             l=k;
             break;
         }
       }
     }
     if(j!=l)
     {
       diff=l-j;
     }
     if(mindistance>diff)
     {
       mindistance=diff;
     }
     n++;
     if(i<size)
     { 
       goto Start;
     }
     printf("\nThe minumum distance between %d and %d is: %d.\n",num1, num2, mindistance);

   }

   /*
   Output: 
  
   Enter the size of the array: 10
   Enter the Elements: 7 9 5 11 7 4 12 6 2 11
   Enter the 1st number for find distance: 7
   Enter the 2nd number for find distance: 11

   The Given array is: 7 9 5 11 7 4 12 6 2 11 
   The minumum distance between 7 and 11 is: 1.

   */
