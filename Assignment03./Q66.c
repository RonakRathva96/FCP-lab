#include <stdio.h>

int fact(int n){
    int i,f=1;
    for (i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
    int result;
    result = fact(n)/(fact(r)*fact(n-r));
    return result;
}

int main(){
    int n,r,result;
    printf("enter the value of n and r to caluculate ncr");
    scanf("%d%d",&n,&r);
    result=ncr(n,r);
    printf("ncr = %d",result);
    
    return 0;
}