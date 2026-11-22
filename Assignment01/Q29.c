
#include <stdio.h>

int main()
{
    int num, sum = 0, q;
    printf("enter number =");
    scanf("%d", &num);
    int temp =num ;
    while (num != 0)
    {
        q = num % 10;
        sum = sum * 10 + q;
        num /= 10;
    }
    if (temp == sum)
    {
        printf("the number is palindrom");
    }
    else
    {
        printf("the number not is palindrom");
    }
    return 0;
}