#include <stdio.h>

int main(){
    int a,b,c;
     printf("enter the value of a =");
    scanf("%d",&a);

     printf("enter the value b =");
    scanf("%d",&b);

    c=a;
    a=b;
    

    printf("the swap value of a is %d and the swap value of c is %d",a,c);
    return 0;
}