//17. Write a program in C to find the second smallest element in an array.

#include<stdio.h>
void main()  
{
   int size,i,j,small_num,temp;
   printf("Enter the array size: ");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the elements: \n");
   for(i=0; i<size; i++)
   {
     printf("Element %d: ",i);
     scanf("%d",&arr[i]);
   }     
   for(i=0; i<size; i++)
   {
     for(j=i+1; j<size; j++)
     {
        if(arr[i]>arr[j])
        {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
        }
     }
   }
   small_num=arr[0];
   for(i=1; i<size; i++)
   {
     if(arr[0]<arr[i])
     {
       printf("Second smallest element is: %d\n",arr[i]); 
       break;
     }
   }
}

Output:

Enter the array size: 11
Enter the elements: 
Element 0: 0
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 6
Element 6: 7
Element 7: 8
Element 8: -2
Element 9: -1
Element 10: 5
Second smallest element is: -1

