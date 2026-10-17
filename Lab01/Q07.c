#include <stdio.h>

int main(){
    float b,h,a;
    printf("Enter the value of base of triangle in meter = ");
    scanf("%f",&b);

     printf("Enter the value of height of triangle in meter = ");
    scanf("%f",&h);

     a=0.5*b*h;
    printf("the area of triangle is %.2f",a);


    return 0;
}