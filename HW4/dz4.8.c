//
//  main.c
//  dz4.8
//
//  Created by Эдуард Рахматуллин on 05.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x1,y1,x2,y2;
    float k,b;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    k=(float)(y2-y1)/(x2-x1);
    b=y1-k*x1;
    printf("%.2f %.2f", k,b);
    return 0;
}
