//  To input month number and print number of days in that month.
#include <stdio.h>
void main()
{
  int m;
  printf("Enter the month: ");
  scanf("%d", &m);

  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
  {
    printf("31 days for %dth month.\n", m);
  }
  else if (m == 2)
  {
    printf("28 days for 2nd month.\n");
  }
  else if (m == 4 || m == 6 || m == 9 || m == 11)
  {
    printf("30 days for %dth month.\n", m);
  }
  else
  {
    printf("Enter valid month.\n");
  }
}

/*
Sample Output:

Enter the month: 11
30 days for 11th month.

*/