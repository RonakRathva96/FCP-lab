#include <stdio.h>

int main(){
    int a[3][3],b[3][3],multi[3][3], i, j,k ;
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
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            multi[i][j]=0;
            for(k=0;k<3;k++){
                multi[i][j]=multi[i][j]+a[i][k]*b[k][j];

            }
        }
    }
printf("the multi of both matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", multi[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}