//
// Created by ThinkPad on 2021/5/8.
//你可能发现写出来的代码只能统计英文字符的个数，遇到中文字符结果就会出错。
// 请自行观察你当前系统对中文字符的处理方式，并设计一个可以统计中文字符以及中英文混合字符的程序。
//

#include <stdio.h>

int main()
{
    char str[] = "刘";
    char *ps = str;
    int sum = 0;
    size_t length = sizeof(str) / sizeof(str[0]);

    printf("length = %llu\n", length);
    for (int i = 0; i < length; ++i) {
        printf("str[%d] = %d\n", i, str[i]);
        sum += str[i];
    }
    for (int i = 0; i < length; ++i) {
        printf("str[%d] = %d\n",i, *ps++);

    }
    printf("%d",sum);


    return 0;
}

