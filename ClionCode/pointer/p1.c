//
// Created by ThinkPad on 2021-06-04.
//
#include <stdio.h>

int myStrlen(char* str)
{
    int count = 0;
    while(*str++ != '\0')
    {
        count++;
    }

    return count;
}


int main()
{
    char arr[] = "bit";
    int len = myStrlen(arr);
    printf("strlen = %d\n", len);

    return 0;
}

