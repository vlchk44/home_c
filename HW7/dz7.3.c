//
//  main.c
//  dz7.3
//
//  Created by Эдуард Рахматуллин on 19.02.2026.
//
#include <stdio.h>

void reverse(int n)
{
    printf("%d", n % 10);
    
    if (n >= 10) {
        printf(" ");
        reverse(n / 10);
    }
}
        int main(void)
        {
            int n;
            scanf("%d", &n);
            reverse(n);
            return 0;
        }
