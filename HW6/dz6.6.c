//
//  main.c
//  dz6.6
//
//  Created by Эдуард Рахматуллин on 12.02.2026.
//
#include <stdio.h>
unsigned long long power (int n, int p)
{
    unsigned long long result=1;
    for (int i=0; i<p;i++)
        result=result*n;
    return result;
}

unsigned long long chekmate (int n)
{
    return power(2,n-1);    //использовал свою старую функцию для возведения числа в степень
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%llu", chekmate (n));
    return 0;
}
