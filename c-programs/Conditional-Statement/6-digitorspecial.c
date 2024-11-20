// to find entered character is alphabet or digit or special character.

#include <stdio.h>
void main()
{
  char c;
  printf("Enter any one character: ");
  scanf("%c", &c);

  if (c >= 65 && c <= 90)

  {
    printf("Entered character '%c' is alphabet.\n", c);
  }
  else if (c >= 97 && c <= 122)
  {
    printf("Entered character '%c' is alphabet.\n", c);
  }
  else if (c >= 48 && c <= 57)
  {
    printf("Entered character '%c' is digit.\n", c);
  }
  else
  {
    printf("Entered character '%c' is special character.\n", c);
  }
}

/*
Sample Output:

Enter any one character: a
Entered character 'a' is alphabet.

*/