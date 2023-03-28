// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
//  Test Data :
//  50 50 60
//  Expected Output :
//  This is an isosceles triangle.

#include <stdio.h>
void main()
{
  float a, b, c;
  printf("Input Three sides of triangle: \n");
  scanf("%f%f%f", &a, &b, &c);

  if (a == b && a == c)
  {
    printf("This is an Equilateral triangle.\n");
  }

  else if (a == b || a == c || b == c)
  {
    printf("This is an Isosceles triangle.\n");
  }

  else
  {
    printf("This is an Scalene triangle.\n");
  }
}

/*
Sample Output:

Input Three sides of triangle: 
60
40
60
This is an Isosceles triangle.

*/