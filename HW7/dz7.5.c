//
//  main.c
//  dz7.5
//
//  Created by Эдуард Рахматуллин on 19.02.2026.
//
#include <stdio.h>

void systemoftwo(int n)
{
    if (n >= 2)
        systemoftwo(n / 2);
        printf("%d",n % 2);
    
}
        int main(void)
        {
            int n;
            scanf("%d", &n);
            systemoftwo(n);
            return 0;
        }
