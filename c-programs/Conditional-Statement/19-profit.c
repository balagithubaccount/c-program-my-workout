//11. To calculate profit or loss.


//IA- Investment Amount, GA-Gain amount, P-Profit.
#include <stdio.h>
void main()
{
  float IA,GA,P;
  printf("Enter the Investment Amount(In Rs.): ");
  scanf("%f",&IA);
  printf("Enter the Gain Amount(In Rs.): ");
  scanf("%f",&GA);
  
  P= IA-GA;
  
  if(P<0) 
    { P=(-1)*P;
      printf("Profit amount is %fRs.\n",P);
    }
  else if(P>0)
    {
      printf("Loss amount is %fRs.\n",P);
    }
  else
    {
      printf("without loss and without Profit");  
    }
}
