#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("0");
        }
        
            printf("1");
        
        for (j = 5-i; j >0; j--)
        {
            printf("0");
        }
        
        printf("\n");
    }
    return 0;
}