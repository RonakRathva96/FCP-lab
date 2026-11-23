#include <stdio.h>

int main()
{
    int n, number[100], t;
    printf("enter how much number you will enter =");
    scanf("%d", &n);
    printf("enter %d number \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("before sorting \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", number[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (number[0] > number[i])
        {
            t=number[0];
            number[0] = number[i];
            number[i] = t;
        }
        printf("\nstep %d\n", i+1);
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", number[i]);
        }
    }
    return 0;
}