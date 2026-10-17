#include <stdio.h>

int main()
{
    int a, b, i;
    float c = 1.00;
    printf("Enter the value of base = ");
    scanf("%d", &a);

    printf("Enter the value of power = ");
    scanf("%d", &b);
    if (b > 0)
    {

        for (i = 1; i <= b; i++)
        {
            c = c * a;
        }
    }
    else if (b < 0)
    {
        for (i = -1; i >= b; i--)
        {
            c = c/a;
        }
    }
    printf("answer=%f", c);
    return 0;
}