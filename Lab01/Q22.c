#include <stdio.h>

int main(){
    int a,f=1;
    printf("enter any number = ");
    scanf("%d",&a);

    for(int i=a;i>=1;i--){
        f=f*i;
    }

    printf("the factorial of %d is %d",a,f);
    return 0;
}