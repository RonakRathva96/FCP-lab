#include <stdio.h>

int main(){
    int a[3][3],b[3][3],sub[3][3], i, j ;
    printf("enter 3 x 3 matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the entered first matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("enter another 3 x 3 matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the entered second matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
        printf("\n");
    }
    printf("the sub of both matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}