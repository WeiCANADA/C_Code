//
// Created by ThinkPad on 2021/5/6.
//

#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = 0;
    for (int i = 3; i < 24; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("total = %d", c);
    return 0;
}