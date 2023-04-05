// Write a C program to find BMI in the given height and weight using pointer.

#include <stdio.h>
void BMI(float *H, float *W, float *result)
{
    printf("Input the height(cm): ");
    scanf("%f", H);
    printf("Input the Weight(Kg): ");
    scanf("%f", W);

    *H = *H / 100;
    *H = *H * *H;
    *result = *W / *H;
}
int main()
{
    float h, w, res;

    float *Height, *Weight, *Result;
    Height = &h;
    Weight = &w;
    Result = &res;

    BMI(Height, Weight, Result);

    printf("\nYour BMI Result: %.2f ", *Result);

    if (res < 18.5)
        printf("\nYour BMI Category: Underweight\n");
    else if (res >= 18.5 && res <= 25)
        printf("\nYour BMI Category: Normalweight\n");
    else if (res > 25 && res <= 30)
        printf("\nYour BMI Category: Overweight\n");
    else
        printf("\nYour BMI Category: Obese\n");

    return 0;
}

/*

Sample Output:

Input the height(cm): 152
Input the Weight(Kg): 60

Your BMI Result: 25.97
Your BMI Category: Overweight
*/