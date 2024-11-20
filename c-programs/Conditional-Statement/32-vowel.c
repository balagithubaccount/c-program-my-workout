// entered alphabet is vowel or consonant.
#include <stdio.h>
void main()
{
  char c;
  printf("Enter any one alphabet: ");
  scanf("%c", &c);

  if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85)
  {
    printf("Entered alphabet '%c' is vowel.\n", c);
  }
  else if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
  {
    printf("Entered alphabet '%c' is vowel.\n", c);
  }
  else
  {
    printf("Entered alphabet '%c' is consonant.\n", c);
  }
}

/*
Sample Output:

Enter any one alphabet: e
Entered alphabet 'e' is vowel.

*/