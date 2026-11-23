#include <stdio.h>

int main()
{
    int a[3][3], i, j, max, min;
    printf("enter 3 x 3 matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the entered matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }printf("\n");
    }
    
    max = a[0][0];
    min = a[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
              max =  a[i][j];
            }
            if (a[i][j] < min)
            {
                min=a[i][j] ;
            }
        }
    }
    printf("\nthe max no. is %d and the min no. is %d", max, min);

    return 0;
}