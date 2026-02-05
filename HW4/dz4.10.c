//
//  main.c
//  dz4.10
//
//  Created by Эдуард Рахматуллин on 05.02.2026.
//
#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a<3)
        printf("winter");
            else if (a<6)
                printf("spring");
                    else if (a<9)
                        printf("summer");
                        else if (a<12)
                            printf ("autumn");
                        else printf ("winter");
    return 0;
}

