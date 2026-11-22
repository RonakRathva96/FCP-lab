#include <stdio.h>

int main()
{
    int n, number[100], max, smax;
    printf("enter how much number you will enter =");
    scanf("%d", &n);
    printf("enter %d number \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    max = number[0];
    smax = number[0];
    for (int i = 0; i < n; i++)
    {
        if (number[i] > max)
        {
            smax = max;
            max = number[i];
        }
        else if (number[i] > smax && number[i] != max)
        {
            smax = number[i];
        }
    }
    printf("the max number is %d and second max number is %d", max, smax);
    return 0;
}