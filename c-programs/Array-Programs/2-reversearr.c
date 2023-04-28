//2.Write a C program to store array and print reverse without string

#include<stdio.h>
void main()
{
  int n,i,t;
  printf("Enter the number of elements store in array: ");
  scanf("%d",&n);
  int array[n],j=n-1;
  printf("Enter the %d values:\n",n);
  for(i=0; i<n; i++)
  {
    scanf("%d",&array[i]);
  }
  for(i=0; i<n/2; i++)
  {
    t=array[i];
    array[i]=array[j];
    array[j]=t;
    j--;
  }
  i=0;
  while(i<n)
  {
    printf("%d ",array[i]);
    i++;
  }
  printf("\n");
}

output:
Enter the number of elements store in array: 9
Enter the 9 values:
5 4 2 1 3 7 5 3 8
8 3 5 7 3 1 2 4 5
