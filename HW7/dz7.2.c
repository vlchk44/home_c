//
//  main.c
//  dz7.2
//
//  Created by Эдуард Рахматуллин on 19.02.2026.
//
#include <stdio.h>

void rec(int n, int *sum)
{
    if (n > 0)
    {
        *sum += n;
        rec(n - 1, sum);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int summa = 0;
    rec(n, &summa);

    printf("%d", summa);
    return 0;
}
