// 3.Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
// Test Data : 7 9
// Expected Output :
// The coordinate point (7,9) lies in the First quadrant.

#include <stdio.h>
void main()
{
  float x_value, y_value;
  printf("Input x and y coordinate: \n");
  scanf("%f%f", &x_value, &y_value);
  if (x_value > 0 && y_value > 0)
  {
    printf("(%f,%f) lies in 1st quadrant.\n", x_value, y_value);
  }
  else if (x_value < 0 && y_value > 0)
  {
    printf("(%f,%f) lies in 2nd quadrant.\n", x_value, y_value);
  }
  else if (x_value < 0 && y_value < 0)
  {
    printf("(%f,%f) lies in 3rd  quadrant.\n", x_value, y_value);
  }
  else
  {
    printf("(%f,%f) lies in 4th quadrant.\n", x_value, y_value);
  }
}

/*
Sample Output:

Input x and y coordinate: 
-5
7
(-5.000000,7.000000) lies in 2nd quadrant.

*/