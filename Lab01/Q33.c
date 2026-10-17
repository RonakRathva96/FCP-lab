#include <stdio.h>

int main()
{
    int n, number[100], max, min;
    printf("enter how much number you will enter =");
    scanf("%d", &n);
    printf("enter %d number \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    max = number[0];
    min = number[0];
    for (int i = 0; i < n; i++)
    {
        if (number[i] > max)
        {
        
            max = number[i];
        }
    
    }
     for (int i = 0; i < n; i++)
    {
        if (number[i] < min)
        {
        
            min = number[i];
        }
    }
    printf("the max number is %d and min number is %d", max, min);
    return 0;
}