//
//  main.c
//  dz4.12
//
//  Created by Эдуард Рахматуллин on 05.02.2026.
//
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 &&
        a + b > c &&
        a + c > b &&
        b + c > a)
        printf("YES");
    else
        printf("NO");
    return 0;
}
