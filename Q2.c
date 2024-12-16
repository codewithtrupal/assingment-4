#include <stdio.h>

void calc( int x, int y, int *sum, int *sub, int *multi, int *div);

int main()
{
    int x = 5, y = 5;
    int sum, sub , multi, div;

    calc(x,y,&sum,&sub,&multi,&div);

    printf("This is sum = %d \n", sum);
    printf("This is subtraction = %d \n", sub);
    printf("This is multiplication = %d \n", multi);
    printf("This is division = %d \n", div);

    return 0;
}

void calc( int x, int y, int *sum, int *sub, int *multi, int *div)
{
    *sum = x + y;
    *sub = x - y;
    *multi = x * y;
    *div = x / y;
}