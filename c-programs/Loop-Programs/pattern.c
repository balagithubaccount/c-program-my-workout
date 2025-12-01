// Online C++ compiler to run C++ program online
#include <stdio.h>

void printPattern(int N)
{
    int j = N;
    int k = N;
    int printNum;

    for (int i = 1; i <= N; i++)
    {
        printNum = i;
        // Starting Zero...
        while (j >= 1)
        {
            printf("0 ");
            j--;
        }

        for (int l = 1; l <= i; l++)
        {
            printf("%d ", printNum);
            printNum++;
        }
        printNum -= 2;
        for (int m = 1; m <= i - 1; m++)
        {
            printf("%d ", printNum);
            printNum--;
        }

        while (k >= 1)
        {
            printf("0 ");
            k--;
        }
        printf("\n");
        k = j = N - i;
    }
}

int main()
{
    // Write C++ code here

    printPattern(5);

    return 0;
}

// output

/*
0 0 0 0 0 1 0 0 0 0 0
0 0 0 0 2 3 2 0 0 0 0
0 0 0 3 4 5 4 3 0 0 0
0 0 4 5 6 7 6 5 4 0 0
0 5 6 7 8 9 8 7 6 5 0
*/