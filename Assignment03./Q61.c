#include <stdio.h>
void palindrom(int n);
int main()
{
    int num;
    printf("enter number =");
    scanf("%d", &num);
    palindrom(num);

    return 0;
}
void palindrom(int n)
{
    int  sum = 0, q;

    int temp = n;
    while (n != 0)
    {
        q = n % 10;
        sum = sum * 10 + q;
        n /= 10;
    }
    if (temp == sum)
    {
        printf("the number is palindrom");
    }
    else
    {
        printf("the number not is palindrom");
    };
}