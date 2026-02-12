//
//  main.c
//  dz6.1
//
//  Created by Эдуард Рахматуллин on 11.02.2026.
//
#include <stdio.h>

int mod (int a)
{
   // if (a>=0)         можно и через if/else
     //   return a;
    //else
      //  return -a;
    return (a<0)? -a:a; //можно и через тернарник
}

int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%d", mod (a));
    return 0;
}
