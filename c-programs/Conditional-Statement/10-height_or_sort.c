//2. Write a C program to accept the height of a person in centimeter and categorize the person according to their height
#include <stdio.h>
void main()
{
  float height_cm;
  printf("Input your height in cm: ");
  scanf("%f",&height_cm);
  if(height_cm<150)
    {printf("The person is 'Dwarf'.\n");}
  else if(height_cm >=150 && height_cm<165)
    {printf("The person is 'Average height'.\n");}
  else if(height_cm>=165 && height_cm<=195)
    {printf("The person is 'Taller'.\n");}
  else {printf("The person is 'Abnormal height'.\n");}
  
}
