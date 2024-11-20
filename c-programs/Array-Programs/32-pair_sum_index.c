//32.Write a C program To find a pair with given sum in the array.

#include<stdio.h>
void main()
{
  int arr[]={6,8,4,-5,7,9};
  int i,j,sum,sol;
  printf("The given array: ");
  for(i=0; i<6; i++)
   printf("%d ",arr[i]);
  printf("\nEnter the sum value: ");
  scanf("%d",&sum);
  for(i=0; i<6; i++)
  {
    for(j=0; j<6; j++)
    {  
      if(sol==1)
        break;
      if(i!=j && (arr[i]+arr[j]==sum))
      {
         printf("Pair of elements can make the given sum by the value of index %d and %d.\n",i,j);
         sol=1;
         break;
      }
     
    }
  }
}

/*
Output 1:

The given array: 6 8 4 -5 7 9 
Enter the sum value: 15
Pair of elements can make the given sum by the value of index 0 and 5.


Output 2:

The given array: 6 8 4 -5 7 9 
Enter the sum value: 1
Pair of elements can make the given sum by the value of index 0 and 3.

*/
