//
//  main.c
//  dz6.5
//
//  Created by Эдуард Рахматуллин on 12.02.2026.
//
#include <stdio.h>

int sum (int n)
{
return (n*(n+1))/2;
    }

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d\n", sum (n));
    return 0;
}
