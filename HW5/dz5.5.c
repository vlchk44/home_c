//
//  main.c
//  dz5.5
//
//  Created by Эдуард Рахматуллин on 10.02.2026.
//
#include <stdio.h>

int main(void) {
    int n;
    int sum=0;
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
