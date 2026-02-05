//
//  main.c
//  dz4.9
//
//  Created by Эдуард Рахматуллин on 05.02.2026.
//
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((c > b) && (b > a))
        printf("YES");
    else
        printf("NO");
    return 0;
}
