#include <stdio.h>

int main()
{
    int a = 1, b = 0, c, sum = 0, count = 0;
    do

    {

        c = a + b;
        b = a;
        a = c;
        printf("%d\t", b);

        count++;
    } while (count < 10);

    return 0;
}