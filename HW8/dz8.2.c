#include <stdio.h>
#define SIZE 5

int MinArr(int arr[])
{
    int min = arr[0];
    
    for (int i = 1; i < SIZE; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    
    return min;
}

int main(void)
{
    int arr[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", MinArr(arr));
    return 0;
}
