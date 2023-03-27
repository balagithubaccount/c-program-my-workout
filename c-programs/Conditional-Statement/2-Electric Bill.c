//6. Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. 

#include <stdio.h>
void main()
{
  int ID;
  float unit,charge,surcharge,total;
  char string[50];

  printf("Enter customer ID: ");
  scanf("%d",&ID);

  printf("Enter customer name: ");
  scanf(" %[^\n]",string);

  printf("Enter unit consumed: ");
  scanf("%f",&unit);
  printf("\n");

if(unit<=199)
  {
    charge=unit*1.20;
    printf("Amount Charges @1.20 per unit: %f\n",charge);
  
  }
else if(unit>=200 && unit<400)
  {
    charge=unit*1.50;
    printf("Amount Charges @1.50 per unit: %f\n",charge);
  
  }
else if(unit>=400 && unit<600)
  {
    charge=unit*1.80;
    printf("Amount Charges @1.80 per unit: %f\n",charge);
  
  }
else
  {
    charge=unit*2.00;
    printf("Amount Charges @2.00 per unit: %f\n",charge);
  
  }
if(charge>=400)
  {
    surcharge = (charge/100)*15;
    if(surcharge>=100)
      {
       printf("Surcharge amount: %f\n",surcharge); 
      }
    else
      {
       surcharge = 100;
       printf("Surcharge amount is: %f\n",surcharge);
      }
  }

  total = surcharge+charge;

  printf("Customer ID: %d\n",ID);
  printf("Customer name: %s\n",string);
  printf("Unit Consumed: %f\n",unit);
  printf("Net Amount Paid By the Customer: %f\n",total);
}


/*
Sample Output:

Enter customer ID: 324160
Enter customer name: James
Enter unit consumed: 457

Amount Charges @1.80 per unit: 822.599976
Surcharge amount: 123.389999
Customer ID: 324160
Customer name: James
Unit Consumed: 457.000000
Net Amount Paid By the Customer: 945.989990

*/
