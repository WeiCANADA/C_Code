//
// Created by Wei on 2022-01-04.
//
#include <stdio.h>
union U
{
    char c;
    int i;
};
int main(void)
{
    union U u;
    printf("Size: %zd\n", sizeof(u));
    printf("Address u.c: %p\n", &(u.c));
    printf("Address u.i: %p\n", &(u.i));

    return 0;
}

