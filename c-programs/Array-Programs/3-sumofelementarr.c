//3. Write a C program to sum of array elements;

#include<stdio.h>
void main()
{
  int n,i,sum=0;
  printf("Enter the number of elements store in array: ");
  scanf("%d",&n);
  int array[n];
  i=0;
  printf("Enter the elements:\n");
  do{
      scanf("%d",&array[i]);
      sum=sum+array[i];
      i++;
   }while(i<n);
  printf("Sum of the array elements is: %d\n",sum);
}

output:

Enter the number of elements store in array: 7
Enter the elements:
1 
2
3
4
5
6
7
Sum of the array elements is: 28

