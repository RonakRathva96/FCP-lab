#include <stdio.h>

int main(){
    int a,b,ans;
    char s;
    printf("use as simple calculator\n");
    scanf("%d%c%d",&a,&s,&b);
    switch(s){
        case '+':ans=a+b;
            printf("%d\n",ans); 
            break ;

        case '-':ans=a-b;
            printf("%d\n",ans); 
            break ;
        case '*':ans=a*b;
            printf("%d\n",ans); 
            break ;
        case '/':ans=a/b;
            printf("%d\n",ans); 
            break ;
        default:printf("you can do only summation,subtarction,multlipication or division");
    }
    return 0;
}