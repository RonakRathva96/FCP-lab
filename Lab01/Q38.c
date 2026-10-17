#include <stdio.h>

int main(){
    int i,n,m=1;
    printf("enter number =");
    scanf("%d",&n);
    for(i=1;i<=n;i+=m)
    {
        printf("%d\t",i);
        m+=2;
    }
    return 0;
}