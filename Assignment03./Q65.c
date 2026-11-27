#include <stdio.h>
int checkprime(int a){
    int  i, flag = 0;

    if(a<=1){
        return 0;
    }

    for (i = 2; i <= a / 2 && flag == 0; i++)
    {
        if (a % i == 0)

            flag = 1;
    }
    if (flag == 0)
        return 1;

    else
      return 0;


}

int main(){
    int n,result;
    printf("enter the number if the number is prime it will show 1 otherwise 0\n");
    scanf("%d",&n);
    result=checkprime(n);
    printf("%d",result);

    
    return 0;
}