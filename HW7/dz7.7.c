//
//  main.c
//  dz7.7
//
//  Created by Эдуард Рахматуллин on 19.02.2026.
//
#include <stdio.h>
void rec (int n)
{
    if (n>0)
    {
        printf("%d ",n);
        rec(n-1);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    rec(n);
    return 0;
}
