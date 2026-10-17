#include <stdio.h>

int main(){
    int a;
    printf("enter number=");
    scanf("%d",&a);
    printf("the factor of %d is ",a);
    for(int i=1;i<=a;i++)
    {
        if ( a % i == 0)
        {
           printf("%d\t",i);
        }
        
    }
    return 0;
}