#include <stdio.h>

int main(){
    int a[10],b[10],add[10];
    printf("enter first array 10 element");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("enter second array 10 element");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\nenter first array is      ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
     printf("\nenter second array is    ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", b[i]);
    }
    
    printf("\nthe sum of both array is  ");
    for(int i=0;i<10;i++)
    {
        add[i]=a[i]+b[i];
        printf("%d \t",add[i]);
    }


    return 0;
}