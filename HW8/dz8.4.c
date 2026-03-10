#include <stdio.h>
#define SIZE 10

int SumTwoMax(int arr[])
{
    int max1 = arr[0];
    int max2 = arr[1];

    //if (max2 > max1) использовал if кострукцию
    //{
    // int temp = max1;
    //    max1 = max2;
    //    max2 = temp;
    //}
    int temp = max1;
    max1 = (max2 > max1) ? max2 : max1; //использовал тернарник
    max2 = (max2 > temp) ? temp : max2;

    for (int i = 2; i < SIZE; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    return max1 + max2;
}

int main(void)
{
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", SumTwoMax(arr));

    return 0;
}
