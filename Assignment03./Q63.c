#include <stdio.h>
void exchange(int *a, int *b);

int main()
{
    int x, y;
    printf("enter value of x and y");
    scanf("%d%d", &x, &y);
    exchange(&x, &y);
    printf("the exchanged value of x is %d and the value of y is %d", x, y);

    return 0;
}
void exchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}