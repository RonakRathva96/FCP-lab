#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("enter any number = ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("number is neither prime nor composite");
    }
    else
    {
        for (i = 2; i <= n / 2 && flag == 0; i++)
        {
            if (n % i == 0)

                flag = 1;
        }
        if (flag == 0)
            printf("number is prime");

        else
            printf("number is composite ");
    }
    return 0;
}