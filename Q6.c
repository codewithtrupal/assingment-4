#include <stdio.h>

void cpy(int *ptr, int *ptr1);

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 8};
    int arr1[10];

    cpy(arr, arr1);

    printf("\nThis is Original \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\nThis is copy value\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d", arr1[i]);
    }

    return 0;
}

void cpy(int *ptr, int *ptr1)
{
    for (int i = 0; i < 6; i++)
    {
        ptr1[i] = ptr[i];
    }
}

