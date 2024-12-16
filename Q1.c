#include <stdio.h>

void swap(int *n1, int *n2);

int main()
{
    int n1,n2;

    printf("Enter n1 : ");
    scanf("%d", &n1);

    printf("Enter n2 : ");
    scanf("%d", &n2);

    swap(&n1,&n2);

    printf("n1 = %d , n2 = %d", n1 , n2);
}

void swap(int *n1, int *n2)
{
    int tem;

    tem = *n1;
    *n1 = *n2;
    *n2 = tem;
}