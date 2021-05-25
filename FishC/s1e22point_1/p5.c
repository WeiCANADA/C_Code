//
// Created by ThinkPad on 2021/5/9.
//使用 fgets 函数接收用户输入的两个字符串到 str1 和 str2 中，将 str2 连接到 str1 后边，并打印出来。

#include <stdio.h>

#define MAX 1024

int main()
{
    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;
    setbuf(stdout, 0);

    printf("Input the first String:");
    fgets(str1, MAX, stdin);
    printf("%s\n", str1);
    printf("Input the second String:");
    fgets(str2, MAX, stdin);
    printf("%s\n", str2);

    printf("初始指针位置和对应字符为:%c,%p\n",*target1, target1);


    while( *target1++ != '\0')
    {
        printf("指针字符和地址为:%c,%p\n", *target1, target1);
    }

    printf("循环后的指针字符和地址为:%c,%p\n", *target1, target1);
    target1 -= 2;
    printf("target1 -= 2后的指针字符和地址为:%c,%p\n", *target1, target1);


    while ((*target1++ = *target2++) != '\0')
        ;
    //*target1 = '\0';


    printf("合并后的字符串为:%s\n", str1);

    return 0;
}

