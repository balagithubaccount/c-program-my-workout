// To find all roots of a quadratic equation.
//  General form of the Quadratic equation (ax^2+bx+c=0)
//  s=b^2-4ac.
//  sqr = (b^2-4ac)^1/2

#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, d;
  double s, sqr, n1, n2, r1, r2;

  printf("Enter a value: ");
  scanf("%f", &a);

  printf("Enter b value: ");
  scanf("%f", &b);

  printf("Enter c value: ");
  scanf("%f", &c);

  s = (b * b) - (4 * a * c);
  sqr = sqrt(s);

  b = -1 * b;
  d = 2 * a;

  n1 = b + sqr;
  n2 = b - sqr;

  r1 = n1 / d, r2 = n2 / d;

  if (s > 0 || s == 0)
  {
    printf("1st Root: %lf\n", r1);
    printf("2nd Root: %lf\n", r2);
  }
  else
  {
    printf("Roots are Imaginary... \n");
  }
  return 0;
}

/*
Sample Output:

Enter a value: 1
Enter b value: -3
Enter c value: 2
1st Root: 2.000000
2nd Root: 1.000000

*/