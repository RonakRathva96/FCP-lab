#include <stdio.h>
void fib(int num)
{
 int a=0,b=1,c;
 for (int i=0;i<num;i++){
    printf("%d\t",a);
    c=a+b;
    a=b;
    b=c;
    
 }
 
}

int main(){
    int a,result;
    printf("enter the number");
    scanf("%d",&a);
    fib(a);
    
    return 0;
}
