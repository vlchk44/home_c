//
//  main.c
//  dz6.2
//
//  Created by Эдуард Рахматуллин on 11.02.2026.
//
#include <stdio.h>

int power (int n, int p)
{
    int result=1;
    for (int i=0; i<p;i++)
        result=result*n;
    return result;
}

int main(void)
{
    int n;
    int p;
    scanf("%d %d",&n,&p);
    printf("%d", power (n,p));
    return 0;
}
