//
//  main.c
//  dz4.2
//
//  Created by Эдуард Рахматуллин on 04.02.2026.
//

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a>b)
        printf("%d %d", b,a);
        else
            printf("%d %d", a,b);
   
    return 0;
}

