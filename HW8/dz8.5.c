#include <stdio.h>
#define SIZE 10

int SumOfPlus(int arr[])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        
    }
    return sum;
}

int main(void)
{
    int arr[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", SumOfPlus(arr));
    
    return 0;
}

