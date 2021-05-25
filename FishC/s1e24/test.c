//
// Created by ThinkPad on 2021-05-19.
//
#include <stdio.h>

int main(int argc, char *argv[])
{
        int i;

        for (i = 0; i < argc; i++)
        {
                printf("%s\n", argv[i]);
        }

        return 0;
}
