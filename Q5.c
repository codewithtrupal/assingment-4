#include <stdio.h>

void print(int *arr);

int main()
{
    int arr[100];

    printf("\nEnter any five value : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
    }
    
    print(arr);
}

void print(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}