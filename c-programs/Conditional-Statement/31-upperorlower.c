// 4. character is uppercase or lowercase

#include <stdio.h>
void main()
{
   char x;
   printf("Enter any one character: ");
   scanf("%c", &x);

   if (x >= 65 && x <= 90)
   {
      printf("Entered character '%c' is Uppercase alphabet.\n", x);
   }
   else if (x >= 97 && x <= 122)
   {
      printf("Entered character '%c' is Lowercase alphabet.\n", x);
   }
   else
   {
      printf("Entered character '%c' is not alphabet\n", x);
   }
}
