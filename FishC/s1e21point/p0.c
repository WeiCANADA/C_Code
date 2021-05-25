#include <stdio.h>

//
// Created by ThinkPad on 2021/5/8.
//
int main()
{
    int a = 111;
    char ch = 'A';
    int *pa = &a;
    char *pb = &ch;

    printf("%c,%c\n",ch, *pb);
    printf("%d,%d\n",a, *pa);
    printf("%d,%p\n",a, pa);
    printf("%d\n",a==*pa);

    return 0;
}

