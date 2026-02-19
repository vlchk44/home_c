//
//  main.c
//  dz7.1
//
//  Created by Эдуард Рахматуллин on 19.02.2026.
//
#include <stdio.h>
void rec (int n)
{
    if (n>1)
        rec(n-1);
    printf("%d ",n);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    rec(n);
    return 0;
}
