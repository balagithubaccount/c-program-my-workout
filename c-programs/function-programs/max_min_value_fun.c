
// Write a C program to find out maximum and minimum of some values using function which will return an array.

#include <stdio.h>
int i, j, size, max, min;
int max_num(int arr[])
{
   max = arr[0], j = 0;
   for (i = 0; i < size; i++)
   {
      if (max < arr[i])
      {
         max = arr[i];
         j = i;
      }
   }
   return arr[j];
}
int min_num(int arr[])
{
   min = arr[0], j = 0;
   for (i = 0; i < size; i++)
   {
      if (min > arr[i])
      {
         min = arr[i];
         j = i;
      }
   }
   return arr[j];
}

int main()
{
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   int array[size];
   printf("Enter the %d Elements:\n", size);
   for (i = 0; i < size; i++)
   {
      scanf("%d", &array[i]);
   }
   printf("\nNumber of values you want to input: Input %d values.\n", size);
   printf("Minimum Value is: %d\n", min_num(array));
   printf("Maximum Value is: %d\n", max_num(array));
}

/*
  Sample Output:

  Enter the size of the array: 5
  Enter the 5 Elements:
  25
  11
  35
  65
  20

  Number of values you want to input: Input 5 values.
  Minimum Value is: 11
  Maximum Value is: 65

  */
