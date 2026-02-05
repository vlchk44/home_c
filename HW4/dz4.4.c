//
//  main.c
//  dz4.4
//
//  Created by Эдуард Рахматуллин on 04.02.2026.
//
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, max;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    max = a>b ? a:b;
    max = max>c ? max:c;
    max = max>d ? max:d;
    max = max>e ? max:e;
    printf("%d", max);
    return 0;
}

