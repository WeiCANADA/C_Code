//
// Created by ThinkPad on 2021-05-19.
//下标法

#include <stdio.h>

int main()
{
    char *array[5] = {"FishCC", "Five", "stars", "Good", "Wow"};
    char *(*target)[5] =  &array;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; (*target)[i][j] != '\0' ; j++) {
            printf("%c ", (*target)[i][j]);
        }
        printf("\n");
    }

    return 0;
}