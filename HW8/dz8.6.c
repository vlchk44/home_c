#include <stdio.h>
#define SIZE 12

double avgmath(int arr[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        }
        return (double)sum / n;
    }
    
    int main(void)
    {
        int arr[SIZE];
        for (int i = 0; i < SIZE; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        printf("%.2f\n", avgmath(arr, SIZE));
        return 0;
    }
