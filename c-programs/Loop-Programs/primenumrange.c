// to find the prime numbers within a range of numbers

#include <stdio.h>
void main()
{
  int start, end, i, j, count, countt = 0;
  printf("Input the starting number: ");
  scanf("%d", &start);
  printf("Input the ending number: ");
  scanf("%d", &end);
  printf("The prime number between %d and %d are: ", start, end);
  for (i = start; i <= end; i++)
  {
    count = 0;
    for (j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        count++;
      }
    }
    if (count == 2)
    {
      printf("%d ", i);
      countt++;
    }
  }

  printf("\nTotal prime numbers of the given range is: %d\n", countt);
}
/*
Sample Output:

Input the starting number: 1
Input the ending number: 20
The prime number between 1 and 20 are: 2 3 5 7 11 13 17 19 
Total prime numbers of the given range is: 8

*/