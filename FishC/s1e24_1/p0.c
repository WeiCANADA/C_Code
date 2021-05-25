//
// Created by ThinkPad on 2021-05-20.
//

#include <stdio.h>

int main()
{
    char matrix[3][5] = {
            'I', 'l', 'o', 'v', 'e',
            'F', 'i', 's', 'h', 'C',
            '.', 'c', 'o', 'm', '!'
    };
    char *p;

    p = &matrix[0][3];

    printf("%c", *p);
    printf("%c", *p++);
    printf("%c", *++p);
    printf("\n");

    return 0;
}