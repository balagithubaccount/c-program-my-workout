// To input angles of a triangle is valid or not.

#include <stdio.h>
void main()
{
  int A, B, C;
  printf("Enter the three Angles: \n");
  scanf("%d%d%d", &A, &B, &C);

  if ((A + B + C) == 180)
  {
    printf("You Entered angles are make a valid triangle.\n");
  }
  else
  {
    printf("You Entered angles are not make a valid triangle.\n");
  }
}

/*
Sample Output:

Enter the three Angles: 
60
40
80
You Entered angles are make a valid triangle.

*/