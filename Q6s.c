#include<stdio.h>

void cpystr(char *p, char *q);

int main()
{
    char x[50],y[50];

    printf("Enter the first string : ");
    scanf("%s", x);

    cpystr(x,y);

    printf("This is copy string = %s",y);

    return 0;
}

void cpystr(char *p, char *q)
{
    while (*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
    
}