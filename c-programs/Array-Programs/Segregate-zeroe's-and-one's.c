//Write a C program to segregate 0's and 1's in array.

#include<stdio.h>
void main()
{
  int size;
  printf("Enter array size: ");
  scanf("%d",&size);
  int i,j,temp;
  int arr[size];

  printf("Enter the %d elements, for only 0's and 1's:\n",size);
  for(i=0; i<size; i++)
  {
    printf("Element -%d-",i);
    scanf("%d",&arr[i]);
  }

  printf("The given array is: ");
  for(i=0; i<size; i++)
  {
    printf("%d ",arr[i]);
  }

  for(i=0; i<size; i++)
  {
    if(arr[i] >0 )
    {
      for(j=size-1; j>i; j--)
      {
        if(arr[j]==0)
        {
          temp = arr[i];
          arr[i]= arr[j];
          arr[j]= temp;
        }
      }
    }
  }

  printf("\nAfter the segregated array is: ");
  for(i=0; i<size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

/*
Sample Output:

Enter array size: 9
Enter the 9 elements, for only 0's and 1's:
Element -0-1
Element -1-0
Element -2-1
Element -3-0
Element -4-0
Element -5-1
Element -6-0
Element -7-1
Element -8-1
The given array is: 1 0 1 0 0 1 0 1 1 
After the segregated array is: 0 0 0 0 1 1 1 1 1 
*/