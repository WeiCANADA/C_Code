//
// Created by ThinkPad on 2021/5/8.
//

#include <stdio.h>

int main() {
    int a, b, c, t;
    int *pa, *pb, *pc;

    printf("input 3 numbers:");
    scanf("%d%d%d", &a, &b, &c);

    pa = &a;
    pb = &b;
    pc = &c;

    if (a > b)
    {
        t = *pa;
        *pa = *pb;
        *pb = t;
    }
    if(a > c)
    {
        t = *pa;
        *pa = *pc;
        *pc = t;
    }
    if(b > c)
    {
        t = *pb;
        *pb = *pc;
        *pc = t;
    }

    printf("%d <= %d <= %d\n", *pa, *pb, *pc);

    return 0;
}