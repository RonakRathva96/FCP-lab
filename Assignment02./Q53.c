#include <stdio.h>


    int main()
{
    int a[3][3], i, j, rowsum = 0;
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
    for (i = 0; i < 3; i++)
    {
        rowsum=0;
        for (j = 0; j < 3; j++)
        {
           rowsum+=a[i][j] ;

        }
        printf("sum of row %d is %d",i+1,rowsum);
    }
   

    return 0;
}