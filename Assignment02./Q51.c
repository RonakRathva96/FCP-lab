#include <stdio.h>

int main()
{
    int a[5], temp[5];

    printf("enter array 5 element");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\narray before reversing   ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        temp[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        a[i] = temp[4 - i];
    }
    printf("\nafter reversing the array   ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}