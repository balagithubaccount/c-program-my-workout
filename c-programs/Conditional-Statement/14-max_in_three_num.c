
// To find maximum between three numbers

#include <stdio.h>
void main()
{
  int a, b, c;
  printf("Enter the three values: \n");
  scanf("%d %d %d", &a, &b, &c);
  printf("a = %d b = %d c = %d\n", a, b, c);

  if (a > b && a > c)
  {
    printf("Maximum no is %d\n", a);
  }
  else if (a < b && b > c)
  {
    printf("Maximum no is %d\n", b);
  }

  else
  {
    printf("Maximum no is %d\n", c);
  }
}

/*
Sample Output:

Enter the three values: 
5
56
57
a = 5 b = 56 c = 57
Maximum no is 57

*/