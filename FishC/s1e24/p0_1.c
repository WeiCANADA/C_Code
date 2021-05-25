//
// Created by ThinkPad on 2021-05-20.
//指针法
#include <stdio.h>

int main()
{
    char *array[5] = {"FishC", "Five", "Star", "Good", "WoW"};
    char *(*p)[5] = &array;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; *(*(*p + i) + j) != '\0'; j++)
        {
            printf("%c ", *(*(*p + i) + j));
        }
        printf("\n");
    }

    return 0;
}
