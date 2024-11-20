//35.Write a C program To find the largest sum of contiguous subarray of an array.

#include<stdio.h>
void main()
{
  int size, i, sum, maxsum, j, k;
  printf("Enter the array size: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements: \n");
  for(i=0; i<size; i++)
  {
    printf("Element-[%d]: ",i);
    scanf("%d",&arr[i]);
  }
  printf("The given array is: ");
  for(i=0; i<size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  maxsum=0;
  for(i=0; i<size; i++)
  {
    //sum=0;
    for(j=i; j<size; j++)
    {
       sum=0;
       for(k=i; k<=j; k++)
       {
          sum=sum+arr[k];
       }
       if(maxsum<sum)
          maxsum=sum;
    }
  }
  printf("The largest sum of contiguous subarray is: %d.\n",maxsum);
}


/*
Output: 

Enter the array size: 9
Enter the elements: 
Element-[0]: 8
Element-[1]: 3
Element-[2]: 8
Element-[3]: -5
Element-[4]: 4
Element-[5]: 3
Element-[6]: -4
Element-[7]: 3
Element-[8]: 5
The given array is: 8 3 8 -5 4 3 -4 3 5 
The largest sum of contiguous subarray is: 25.

*/
