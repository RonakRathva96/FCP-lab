#include <stdio.h>

int main()
{
    int number[10], i, evencount = 0, oddcount = 0;
    printf("enter 10 number\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (number[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("the total odd number is %d and total even number is %d", oddcount, evencount);

    return 0;
}