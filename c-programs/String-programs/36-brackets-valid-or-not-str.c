//A given string contains the bracket characters '(', ')', '{', '}', '<', ‘>', '[' and ']', Write a C programme to check the said string is valid or not. The input string will be valid when open brackets and closed brackets are same type of brackets.
 
#include <stdio.h>
#include <stdbool.h>
bool bracket_valid_not(char* ptr)
{
    int i=0, x=0,y=0,z=0,w=0;
    int arr[100];
    while(*ptr != '\0')
    {
        if(*ptr == '(')       //  1.x
        {
            x++;
            arr[++i]=1;   
        }
        if(*ptr == '{')       // 2.y
        {
            y++;
            arr[++i]=2;
        }
        if(*ptr == '[')       // 3.z
        {
            z++; 
            arr[++i]=3;
        }
        if(*ptr == '<')       // 4.w
        {
            w++;
            arr[++i]=4;
        }
        if(*ptr == ')')
        {
            if(arr[i] == 1)
            {
               x--;
               i--;
            }
            else{
                return false;
            }
        }
        if(*ptr == '}')
        {
            if(arr[i] == 2)
            {
                y--;
                i--;
            }
            else{
                return false;
            }
        }
        if(*ptr == ']')
        {
            if(arr[i] == 3)
            {
               z--;
               i--;
            }
            else{
                return false;
            }
        }
        if(*ptr == '>')
        {
            if(arr[i] == 4)
            {
               w--;
               i--;
            }
            else{
                return false;
            } 
        }
        ptr++;
    }
    //return true;
   // if( x>0 || y>0 || z>0 || w>0)
  // printf("i = %d\n",i);
   if(i>0)
    {
       return false;
    }
    else{
       return true;
    }
}
int main()
{
    char string[30];
    printf("Input a String: ");
    scanf(" %[^\n]",string);
    if(bracket_valid_not(string)==1)
    {
        printf("Bracket in the string is valid.\n");
    }
    else
    {
        printf("Bracket in the string is invalid.\n");
    }
}
/*

#include <stdio.h>

int main()
{

	char str[] = "<[]{}<>()>{[]]}";
	printf("Str = %s\n",str);

	int i = 0,ind = 0;
	int k,l,m,n;
	k=l=m=n=0;
	int res[50];
	while(str[i] != '\0')
	{
		if(str[i] == '{')   // k
		{
			k++;
			res[++ind] = '{';
		}
		else if(str[i] == '[')   // l
		{
			l++;
			res[++ind] = '[';
		}
		else if(str[i] == '(')   // m
		{
			m++;
			res[++ind] = '(';
		}
		else if(str[i] == '<')   // n
		{
			n++;
			res[++ind] = '<';
		}
		else if(str[i] == '}')
		{
			if(res[ind] == '{')
			{
				k--;
				ind--;
			}
			else {
				goto END;
			}
		}
		else if(str[i] == ']')
		{
			if(res[ind] == '[')
			{
				l--;
				ind--;
			}
			else {
				goto END;
			}
		}
		else if(str[i] == ')')
		{
			if(res[ind] == '(')
			{
				m--;
				ind--;
			}
			else {
				goto END;
			}
		}
		else if(str[i] == '>')
		{
			if(res[ind] == '<')
			{
				n--;
				ind--;
			}
			else {
				goto END;
			}
		}

		i++;
	}

END:

	if(k != 0 || l != 0 || m != 0 ||n != 0 || ind != 0)
		printf("Invalid Input.\n");
	else
		printf("Valid Input.\n");

		return 0;
}
*/

/*
Output:1

Input a String: {[[]{}]}()()
Bracket in the string is valid.

Output:2

Input a String: (({)})
Bracket in the string is invalid.

Output:3

Input a String: <>(){}[]
Bracket in the string is valid.

Output:4

Input a String: )([{}])
Bracket in the string is invalid.
*/
