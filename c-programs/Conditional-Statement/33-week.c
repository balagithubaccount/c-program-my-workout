//  week number to print week day.

#include <stdio.h>
void main()
{
  int w;
  printf("Enter the week number: ");
  scanf("%d", &w);

  if (w == 1)
  {
    printf("1-Monday\n");
  }
  else if (w == 2)
  {
    printf("2-Tuesday\n");
  }
  else if (w == 3)
  {
    printf("3-Wednesday\n");
  }
  else if (w == 4)
  {
    printf("4-Thursday\n");
  }
  else if (w == 5)
  {
    printf("5-Friday\n");
  }
  else if (w == 6)
  {
    printf("6-Saturday\n");
  }
  else if (w == 7)
  {
    printf("7-Sunday\n");
  }
  else
  {
    printf("Enter the valid week number...\n");
  }
}

/*
Sample Output:

Enter the week number: 6
6-Saturday

*/