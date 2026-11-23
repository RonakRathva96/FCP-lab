#include <stdio.h>

int main()
{
    int a[5], b[5], temp[5];
    printf("enter first array 5 element");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter second array 5 element");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n first array is  ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n second array is  ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        temp[i] = a[i];
        a[i] = b[i];
        b[i] = temp[i];
    }
    printf("\n\n\n after swapping");
    printf("\n first array is  ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n second array is  ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", b[i]);
    }

    return 0;
}