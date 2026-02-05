//
//  main.c
//  dz4.3
//
//  Created by Эдуард Рахматуллин on 04.02.2026.
//
#include <stdio.h>

int main(void)
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a>b ? a:b;
    max = max>c ? max:c;
    
    printf("%d", max);
    return 0;
}

