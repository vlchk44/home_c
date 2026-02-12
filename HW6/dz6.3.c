//
//  main.c
//  dz6.3
//
//  Created by Эдуард Рахматуллин on 12.02.2026.
//
#include <stdio.h>

int middle (int a, int b)
{
    int result=(a+b)/2;
    return result;
}

int main(void)
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("%d", middle (a,b));
    return 0;
}
