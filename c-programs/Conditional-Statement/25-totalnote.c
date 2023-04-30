#include <stdio.h>
int main()

{
  int a, n1, n2, n5, n10, n20, n50, n100, n200, n500, n2000, Total;
  n1 = n2 = n5 = n10 = n20 = n50 = n100 = n200 = n500 = n2000 = 0;

  printf("Enter amount: ");
  scanf("%d", &a);

  if (a == 0)
  {
    printf("your input amount is 0.\nPlease enter valid amount..\n");
  }
  if (a < 0)
  {
    printf("Your input amount is negative.\nPlease enter valid amount.\n");
  }

  if (a >= 2000)
  {
    n2000 = a / 2000;
    a = a - n2000 * 2000;
  }
  if (a >= 500)
  {
    n500 = a / 500;
    a = a - n500 * 500;
  }
  if (a >= 200)
  {
    n200 = a / 200;
    a -= n200 * 200;
  }
  if (a >= 100)
  {
    n100 = a / 100;
    a -= n100 * 100;
  }
  if (a >= 50)
  {
    n50 = a / 50;
    a -= n50 * 50;
  }
  if (a >= 20)
  {
    n20 = a / 20;
    a -= n20 * 20;
  }
  if (a >= 10)
  {
    n10 = a / 10;
    a -= n10 * 10;
  }
  if (a >= 5)
  {
    n5 = a / 5;
    a -= n5 * 5;
  }
  if (a >= 2)
  {
    n2 = a / 2;
    a -= n2 * 2;
  }
  if (a >= 1)
  {
    n1 = a / 1;
    a -= n1 * 1;
  }

  if (a == 0)
  {
    printf("2000 = %d note\n", n2000);
    printf("500 = %d note\n", n500);
    printf("200 = %d note\n", n200);
    printf("100 = %d note\n", n100);
    printf("50 = %d note\n", n50);
    printf("20 = %d note\n", n20);
    printf("10 = %d note\n", n10);
    printf("5 = %d note\n", n5);
    printf("2 = %d note\n", n2);
    printf("1 = %d note\n", n1);
  }

  Total = (n1 * 1) + (n2 * 2) + (n5 * 5) + (n10 * 10) + (n20 * 20) + (n50 * 50) + (n100 * 100) + (n200 * 200) + (n500 * 500) + (n2000 * 2000);
  printf("Total amount = %d = Enter amount...\n", Total);

  return 0;
}

/*
Sample Output:

Enter amount: 2923
2000 = 1 note
500 = 1 note
200 = 2 note
100 = 0 note
50 = 0 note
20 = 1 note
10 = 0 note
5 = 0 note
2 = 1 note
1 = 1 note
Total amount = 2923 = Enter amount...

*/