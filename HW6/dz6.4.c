//
//  main.c
//  dz6.4
//
//  Created by Эдуард Рахматуллин on 12.02.2026.
//
#include <stdio.h>

int func (int x)
{
    if (x<-2)
        return 4;
    else if (x<2)
        return x*x;
    else return x*x+4*x+5;
}

int main(void)
{
    int x;
    int y;
    int max=0;
    int first=1;
    while (scanf("%d",&x)==1 && x != 0)
    {
        y = func(x);
        
        if (first || y > max) {
            max = y;
            first = 0;
        }
    }
    
    printf("%d\n", max);
    return 0;
}
