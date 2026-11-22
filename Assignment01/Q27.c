#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("enter any positive number = ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2 && flag == 0; i++)
    {
        if (n % i == 0)

            flag = 1;
    }
    if (flag == 0)
        printf("number is prime");

    else
        printf("number is not a prime ");

    return 0;
}