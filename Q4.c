#include<stdio.h>

 int max(int *n1,int *n2);

int main()
{
    int n1, n2, result;

    printf("Enter n1 : ");
    scanf("%d", &n1);

    printf("Enter n2 : ");
    scanf("%d", &n2);

    result = max(&n1,&n2);

    if (result == 1)
    {
        printf("Maximum nuber is = %d", n1);
    }
    else
    {
         printf("Maximum nuber is = %d", n2);
    }
    
    
}

 int max(int *n1,int *n2)
 {
    if (*n1 > *n2)
    {
        return 1;
    }
    
    return 0;
 }