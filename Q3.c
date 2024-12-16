#include <stdio.h>

int len(char *str);

int main()
{
    char str[] = "cprogramming";
    int result;

    result = len(str);

    printf("Length of the string is = %d", result);
    return 0;
}

int len(char *str)
{
    int length=0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    
    return length;
}