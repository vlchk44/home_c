#include <stdio.h>
#define SIZE 10
int MinIndex(int arr[])
{
    int min = arr[0];
    int index = 1;
    
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i+1;
        }
    }
    
    return index;
}

int MaxIndex(int arr[])
{
    int max = arr[0];
    int index = 1;
    
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i+1;
        }
    }
    
    return index;
}

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

int MaxArr(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    
    return max;
}

int main(void)
{
    int arr[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d ", MaxIndex(arr));
    printf("%d ", MaxArr(arr));
    printf("%d ", MinIndex(arr));
    printf("%d\n", MinArr(arr));
    
    return 0;
}
