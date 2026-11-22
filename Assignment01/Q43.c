#include <stdio.h>

int main(){
    int sale,r;
    printf(" enter the sales in rupees =");
    scanf("%d",&sale);
    if (sale<=500)
    {
        printf("commmission is %d rupees",sale*5/100);
    }
    else if ( sale >500 && sale<=2000   )
    {
        printf("commission is %d rupees",35+((sale-500)*10/100));
    }
    else if( sale> 2000 && sale<=5000)
    {
        printf("commission is %d rupees",185+((sale-2000)*12/100));

    }
    else if(sale>5000){
        printf("commission is %d rupees",sale*25/200);
    }
    return 0;
}