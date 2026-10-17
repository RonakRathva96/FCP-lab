#include <stdio.h>

int main(){
    int a,b,ans;
    char s;
    printf("enter any number\n");
    scanf("%d",&a);
    printf("enter which arithmetic task you want to perform between number\n");
    scanf(" %c",&s);
    printf("enter another number\n");
    scanf("%d",&b);
    
    switch(s){
        case '+':ans=a+b;
            printf("%d%c%d=%d\n",a,s,b,ans); 
            break ;

        case '-':ans=a-b;
            printf("%d%c%d=%d\n",a,s,b,ans); 
            break ;
        case '*':ans=a*b;
            printf("%d%c%d=%d\n",a,s,b,ans); 
            break ;
        case '/':ans=a/b;
            printf("%%c%d=%d\n",a,s,b,ans); 
            break ;
        default:printf("you can do only summation,subtarction,multlipication or division");
    }
    return 0;
}