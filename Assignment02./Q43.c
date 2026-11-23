#include <stdio.h>

int main()
{
    int number[10], i, sum = 0;
    printf("enter 10 number");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += number[i];
    }
    printf("the sum of 10 number is %d", sum);

    return 0;
}