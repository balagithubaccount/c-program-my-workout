// Write a C program to get the largest element of an array using the function.

#include <stdio.h>
int size;
int large_num(int arr[])
{
   int i, big = arr[0], j = 0;
   for (i = 0; i < size; i++)
   {
      if (big < arr[i])
      {
         big = arr[i];
         j = i;
      }
   }
   return arr[j];
}
void main()
{
   printf("Enter the array size: ");
   scanf("%d", &size);
   int arr[size];
   printf("Enter the %d elements: \n", size);
   for (int i = 0; i < size; i++)
   {
      printf("Element-%d: ", i);
      scanf("%d", &arr[i]);
   }
   printf("The Largest element is: %d\n", large_num(arr));
}

/*
Sample Output:

Enter the array size: 5
Enter the 5 elements:
Element-0: 10789
Element-1: 2035
Element-2: 1899
Element-3: 1456
Element-4: 2013
The Largest element is: 10789

*/
