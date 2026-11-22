#include <stdio.h>

int main()
{
    int num, sum = 0, q;
    printf("enter number =");
    scanf("%d", &num);
    
    while (num != 0 )
    {
        q = num % 10;
        sum =  sum +q;
        num /= 10;

    }
printf("the sum of the individual digit of number  is %d",sum);
   return 0;
}