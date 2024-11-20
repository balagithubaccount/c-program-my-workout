// Write a C program to rearrange the given array so that arr[i] becomes arr[arr[i]].......

#include <stdio.h>
void main()
{
  int size, i;
  printf("Enter the array size: ");
  scanf("%d", &size);
  int arr[size], sol[size];
  printf("Enter the elements only '0' to '%d':\n", size - 1);
  for (i = 0; i < size; i++)
  {
    printf("Element %d-", i);
    scanf("%d", &arr[i]);
  }
  printf("The given array is: ");
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);

  for (i = 0; i < size; i++)
    sol[i] = arr[arr[i]];
  printf("\nThe modified array is: ");
  for (i = 0; i < size; i++)
    printf("%d ", sol[i]);
  printf("\n");
}
/*
   Output:

   Enter the array size: 5
   Enter the elements only '0' to '4':
   Element 0-2
   Element 1-1
   Element 2-4
   Element 3-3
   Element 4-0
   The given array is: 2 1 4 3 0
   The modified array is: 4 1 0 3 2
*/