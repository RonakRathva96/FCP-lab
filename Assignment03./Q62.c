#include <stdio.h>
#include <math.h>
void armstrong(int n);

int main()
{
    int num;
    printf("enter number");
    scanf("%d", &num);
    armstrong(num);

    return 0;
}
void armstrong(int num)
{
    int num_of_digit = 0, i, q, sum = 0;

    int temp = num;
    int original = num;

    do
    {
        num_of_digit++;
        temp = temp / 10;

    } while (temp != 0);

    for (int j = 1; j <= num_of_digit; j++)
    {
        q = num % 10;
        sum += round(pow(q, num_of_digit));
        num /= 10;
    }
    if (original == sum)
    {
        printf("the number is an armstrong number");
    }
    else
    {
        printf("the number is not an armstrong number");
    }
}