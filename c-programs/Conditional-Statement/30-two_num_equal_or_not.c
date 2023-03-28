

// Given two numbers equal or not

#include <stdio.h>
int main()
{
	int n1, n2;
	printf("Input a first number: ");
	scanf("%d", &n1);
	printf("Input a second number: ");
	scanf("%d", &n2);
	if (n1 == n2)
	{
		printf("\nGiven numbers are equal.\n");
	}
	else
	{
		printf("Given numbers are not equal.\n");
	}
}

/*
Sample Output:

Input a first number: 12
Input a second number: 21
Given numbers are not equal.

*/