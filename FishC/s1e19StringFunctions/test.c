//
// Created by ThinkPad on 2021/5/7.
//

#include <string.h>
#include<stdio.h>

int main()
{
    char str[2] = {'a', 'b'};
    char str1[2] = {'a', 'b'};
    int i = strcmp(str, str1);
    printf("%d\n", i);
    
    return 0;
}

