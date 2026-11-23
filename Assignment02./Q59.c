#include <stdio.h>

int main(){
     int n, number[100], find ,count=0;
    printf("enter how much number you will enter =");
    scanf("%d", &n);
    printf("enter %d number \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("which number occcurance you want to find\n");
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(find == number[i]){
            count++;
        }
        }
        printf("entered number occur for %d times",count);

    return 0;
}