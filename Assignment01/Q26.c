#include <stdio.h>

int main()
{
    int a, i, sum2 = 0, sum1 = 0;
    printf("enter the number\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            sum2 = sum2 + i;
        }
        else if (i % 2 != 0)
        {
            sum1 = sum1 + i;
        }

        
    }
    printf("the sum of all even no. till %d is %d\n", a, sum2);
    printf("the sum of all odd no. till %d is %d\n", a, sum1);

    return 0;
}