
#include <stdio.h>
int max( int num[10]){
    int i,max;
    max=num[0];
    for (i=0;i<10;i++){
        if (num[i]>max)
        {
            max=num[i];
        }
    }
    return max;

}

int main(){
    int num[10],result;
    printf("enter 10 numbers");
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    result=max(num);
    printf("the maximum number is %d ",result);
    
    return 0;
}