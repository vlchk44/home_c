//
//  main.c
//  dz5.3
//
//  Created by Эдуард Рахматуллин on 10.02.2026.
//
#include <stdio.h>

int main(void)
{
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    while (a<=b) {
        sum += a*a;
        a++;
        }
        printf("%d", sum) ;
        return 0;
    }
