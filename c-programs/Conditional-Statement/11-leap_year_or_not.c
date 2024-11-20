
// 6. to check whether a year is leap year or not

#include <stdio.h>
void main()
{
  int y;
  printf("Enter the Year: ");
  scanf("%d", &y);
  printf("Year %d\n", y);

  if (y % 4 == 0)
  {
    printf("%d is a leap year\n", y);
  }
  else
  {
    printf("%d is not a leap year\n", y);
  }
}

/*
Sample Output:

Enter the Year: 2023
Year 2023
2023 is not a leap year

*/