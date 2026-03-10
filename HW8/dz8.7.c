#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;

    // инверсия первой половины
    for (int i = 0; i < SIZE/4; i++)
    {
        temp = arr[i];
        arr[i] = arr[SIZE/2 - 1 - i];
        arr[SIZE/2 - 1 - i] = temp;
    }

    // инверсия второй половины
    for (int i = SIZE/2; i < SIZE/2 + SIZE/4; i++)
    {
        temp = arr[i];
        arr[i] = arr[SIZE - 1 - (i - SIZE/2)];
        arr[SIZE - 1 - (i - SIZE/2)] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
