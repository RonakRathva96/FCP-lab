#include <stdio.h>

int main(){
    int a,b;
     printf("enter the value of a =");
    scanf("%d",&a);

     printf("enter the value b =");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swap value of a is %d and the swap value of b is %d",a,b);
    return 0;
}