// Write a C program to compute the area of the various geometrical shape.

#include <stdio.h>
#define PI 3.14285714
int main()
{
    int n;
    double Area;
    float r, a, w, l, b, h;

    printf("Input '1' to find Area of the circle: ");
    printf("\nInput '2' to find Area of the square: ");
    printf("\nInput '3' to find Area of the rectangle: ");
    printf("\nInput '4' to find Area of the triangle: \n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:

        printf("Input radius value: ");
        scanf("%f", &r);
        Area = PI * r * r;
        printf("Area of the Circle is: %lf\n", Area);
        break;

    case 2:

        printf("Input 'a' value: ");
        scanf("%f", &a);
        Area = a * a;
        printf("Area of the Square is: %lf\n", Area);
        break;

    case 3:

        printf("Input a values of 'w' and 'l': ");
        scanf("%f%f", &w, &l);
        Area = w * l;
        printf("Area of the Rectangle is: %lf\n", Area);
        break;

    case 4:

        printf("Input a values of 'b' and 'h': ");
        scanf("%f%f", &b, &h);
        Area = 0.5 * b * h;
        printf("Area of the Triangle is: %lf\n", Area);
        break;

    default:
        printf("Input a valid number.\n");
    }
    return 0;
}
/*
Sample Output:

Input '1' to find Area of the circle:
Input '2' to find Area of the square:
Input '3' to find Area of the rectangle:
Input '4' to find Area of the triangle:
2
Input 'a' value: 3.12432
Area of the Square is: 9.761375

*/