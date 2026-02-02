//
//  main.c
//  dz3.5
//
//  Created by Эдуард Рахматуллин on 02.02.2026.
//

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", (a / 100) * ((a / 10) % 10) * (a % 10));
    return 0;
}


