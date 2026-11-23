#include <stdio.h>

int main(){
     int n, number[100], find;
    printf("enter how much number you will enter =");
    scanf("%d", &n);
    printf("enter %d number \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("which number position and index you want to find\n");
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(find == number[i]){
            printf("the index of number is number [%d] and position is %d ",i,i+1);
        }
        else{
            printf("you number is not in a array");
        }
    }

    return 0;
}