#include <stdio.h>

int main()
{
    int a;
    printf("how much unit electricity consume\n");
    scanf("%d", &a);
    if (a <= 200)
    {
        printf("your charge is %.2f rupees", a * .5);
    }
    else if (a > 200 && a <= 400)
    {
        printf("your charge is %.2f rupees", 100 + (a - 200) * .65);
    }
    else if (a > 400 && a <= 600)
    {
        printf("your charge is %.2f rupees", 230 + (a - 400) * .80);
    }
    else if (a > 600)
    {
        printf("your charge is %.2f rupees", 425 + (a - 600) * 1.25);
    }

    return 0;
}