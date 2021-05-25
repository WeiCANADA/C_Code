//
// Created by ThinkPad on 2021-05-21.
//

#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *pi = &array[2];
    void *pv;

    pv = pi;
    printf("%d\n", *pi);
    pv++;
    pi = pv;

    printf("%d\n", *pi);

    return 0;
}