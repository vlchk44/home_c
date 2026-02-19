//
//  main.c
//  dz7.4
//
//  Created by Эдуард Рахматуллин on 19.02.2026.
//
#include <stdio.h>

void trueform(int n)
{
    if (n >= 10)
        trueform(n / 10);
        printf("%d ",n % 10);
    
}
        int main(void)
        {
            int n;
            scanf("%d", &n);
            trueform(n);
            return 0;
        }
