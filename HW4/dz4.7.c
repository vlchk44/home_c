//
//  main.c
//  dz4.7
//
//  Created by Эдуард Рахматуллин on 04.02.2026.
//
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("%d", max);

    return 0;
}
