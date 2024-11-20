
// 5. to check whether a number is even or odd.

#include <stdio.h>
void main()
{
  int x;
  printf("Enter the number: \n");
  scanf("%d", &x);
  printf("x = %d\n", x);

  if (x % 2 == 0)
  {
    printf("A given number %d is even\n", x);
  }
  else
  {
    printf("A given number %d is odd\n", x);
  }
}

/*
Sample Output:

Enter the number: 
23
x = 23
A given number 23 is odd

*/