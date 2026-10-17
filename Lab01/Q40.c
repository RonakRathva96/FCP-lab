#include <stdio.h>

int main()
{
    int a, sum = 0;
    printf("enter numbers i will read untill you entered negative number");

    do
    {
        scanf("%d", &a);
        sum += a;
    } while (a > 0);
    sum = sum - a;
    printf("the sum of entered number untill negative number is %d", sum);
    return 0;
}