//4. Write a C program to read temperature in centigrade and display a suitable message according to temperature state below.
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot
// Test Data :
// 42
// Expected Output :
// Its very hot.

#include <stdio.h>
void main()
{
  float temp;
  printf("Input temperature in centigrade: ");
  scanf("%f",&temp);
  
  if(temp<0)
   {printf("Freezing weather.\n");}
  else if(temp<10)
   {printf("Very cold weather.\n");}
  else if(temp<20)
   {printf("Cold weather.\n");}
  else if(temp<30)
   {printf("Normal in Temperature.\n");}
  else if(temp<40)
   {printf("Its Hot.\n");}
  else {printf("Its Very Hot.\n");}

}
