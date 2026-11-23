#include <stdio.h>

int main()
{
    int number[10], i, poscount = 0, negcount = 0, zerocount = 0;
    printf("enter 10 number\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (number[i] > 0)
        {
            poscount++;
        }
        else if(number[i])
        {
            negcount++;
        }
        else
        {
            zerocount++;
        }
    }
    printf("total positive element is %d , negative element is %d and zero element is %d", poscount, negcount, zerocount);

    return 0;
}