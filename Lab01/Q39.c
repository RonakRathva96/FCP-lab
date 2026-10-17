#include <stdio.h>

int main(){
    int a,f=1,i,n,j;
    printf("enter number =");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
        printf("%d!/%d=%d\t",i,i,f/i);
    }
    
    
    return 0;
}