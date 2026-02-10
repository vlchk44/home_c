//
//  main.c
//  dz5.4
//
//  Created by Эдуард Рахматуллин on 10.02.2026.
//

#include <stdio.h>

int main(void) {
    int n;
    int count=0;
    scanf("%d", &n);
    while (n != 0)
    {
        count++;
        n=n/10;
    }
    if (count==3)
        printf("YES");
    else
        printf("NO");
    return 0;
}
