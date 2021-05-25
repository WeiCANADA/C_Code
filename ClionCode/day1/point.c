#include <stdio.h>

//
// Created by ThinkPad on 2021-05-25.
//
int main()
{
    int a = 10;
    int* p = &a;
    printf(" a 的地址%p\n", &a);
    printf(" int* p 的地址%p\n", p);
    *p = 20;
    printf("point size :%llu\n", sizeof(p));
    printf(" *p 的地址%d\n", *p);

}
