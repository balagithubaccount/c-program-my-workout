// 5. Write a C program to Count duplicate elements in array
#include <stdio.h>
void main()
{
  int size, i, j, k, count, n = 0, m = 0, exit;
  printf("Enter the total number of elements in array: ");
  scanf("%d", &size);
  int main[size], dup[size], check[size];
  printf("Enter the %d elements: ", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &main[i]);
  }
  printf("The given array is: ");
  for (i = 0; i < size; i++)
  {
    printf("%d ", main[i]);
  }
  for (i = 0; i < size; i++)
  {
    count = 0, exit = 0;

    for (k = 0; k < m; k++)
    {
      if (main[i] == check[k])
      {
        exit = 1;
      }
    }
    if (exit != 1)
    {
      for (j = 0; j < size; j++)
      {
        if (main[i] == main[j])
        {
          count++;
        }
      }
      if (count > 1)
      {
        dup[n++] = main[i];
      }
      check[m++] = main[i];
    }
  }
  printf("\nDuplicate elements are: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", dup[i]);
  }
  printf("\nTotal duplicate elements : %d\n", n);
}
/*
   Output:

   Enter the total number of elements in array: 12
   Enter the 12 elements: 1 2 3 4 1 2 5 6 7 8 5 9
   The given array is: 1 2 3 4 1 2 5 6 7 8 5 9
   Duplicate elements are: 1 2 5
   Total duplicate elements : 3

*/