#include <stdio.h>

int main()
{
    int num, sum = 0, q;
    printf("enter number =");
    scanf("%d", &num);
    
    while (num != 0)
    {
        q = num % 10;
        sum = sum * 10 + q;
        num /= 10;
    }
printf("the reverse of the given no. is %d",sum);
}