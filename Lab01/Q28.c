#include <stdio.h>
#include<math.h>

int main(){
    int num,num_of_digit=0,i,q,sum=0;
    
    printf("enter number =");
    scanf("%d",&num);
    int temp=num;
    int original=num;

    do{
           temp=temp/10;
           num_of_digit++;
           
    }while(temp!=0);

    for(int j=1;j<=num_of_digit;j++)
    {
        q=num%10;
        sum+=pow(q,num_of_digit);
        num/=10;
    }
    if (original == sum)
    {
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }

    return 0;
}