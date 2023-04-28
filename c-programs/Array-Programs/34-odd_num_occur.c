//34.Write a C program To find the number occuring odd number of times in an array.


#include<stdio.h>
void main()
{
  int size, i, oddtimes, oddnum, count, j;
  printf("Enter the array size: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements: \n");
  for(i=0; i<size; i++)
  {
    printf("Element-[%d]: ",i);
    scanf("%d",&arr[i]);
  }
  printf("The given array is:\n");
  for(i=0; i<size; i++)
   printf("%d ",arr[i]);
  for(i=0; i<size; i++)
  {
    count=0;
    for(j=0; j<size; j++)
    {
      if(arr[i]==arr[j])
         count++;
    }
    if(count%2!=0)
    {
       printf("\nThe element odd number of times is: %d.\n",count);
       printf("That number is: %d.\n",arr[i]);
       break;
    }
 
  }
}


/*
Output:

Enter the array size: 9
Enter the elements: 
Element-[0]: 8
Element-[1]: 3
Element-[2]: 8
Element-[3]: 5
Element-[4]: 4
Element-[5]: 3
Element-[6]: 4
Element-[7]: 3
Element-[8]: 5
The given array is:
8 3 8 5 4 3 4 3 5 
The element odd number of times is: 3.
That number is: 3.

*/
