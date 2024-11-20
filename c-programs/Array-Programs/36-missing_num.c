//36.Write a C program To find missing number from a given array. there are no duplicates in list.

#include<stdio.h>
void main()
{
  int size, i, j, con, misnum;
  printf("Enter the array size: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements: \n");
  for(i=0; i<size; i++)
  {
    printf("Element-arr[%d]:  ",i);
    scanf("%d",&arr[i]);
  }
  printf("The given array is: ");
  for(i=0; i<size; i++)
    printf("%d ",arr[i]);
  con=0;
  for(i=size; i>=1; i--)
  {
    con=0;
    for(j=0; j<size; j++)
    {
      if(i==arr[j]) 
       con=1;
    }
    if(con==0)
    {
       misnum=i;
       break;
    }
  }
  if(con==0)
       printf("\nThe missing number is: %d.\n",misnum);
  if(con==1)
       printf("\nThe missing number is: %d.\n",size+1);
}

/*
Output: 

Enter the array size: 8
Enter the elements: 
Element-arr[0]:  1
Element-arr[1]:  3
Element-arr[2]:  4
Element-arr[3]:  2
Element-arr[4]:  5
Element-arr[5]:  6
Element-arr[6]:  9
Element-arr[7]:  8
The given array is: 1 3 4 2 5 6 9 8 
The missing number is: 7.

*/








