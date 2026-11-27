#include <stdio.h>
void even_odd(int n);

int main()
{
    int n;
    printf("enter any number");
    scanf("%d", &n);
    even_odd(n);

    return 0;
}
void even_odd(int n)
{
    
    if (n % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}
