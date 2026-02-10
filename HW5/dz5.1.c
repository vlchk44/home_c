//
//  main.c
//  dz5.1
//
//  Created by Эдуард Рахматуллин on 10.02.2026.
//
#include <stdio.h>

int main(void)
{
    int n,k;
    scanf("%d",&n);
    while (n<100) {
        k=1;
        while (k<=n) {
            printf("%d %d %d\n", k,k*k,k*k*k);
            k++;
        }
        return 0;
        
    }}
