//
// Created by ThinkPad on 2021/5/9.
//使用 fgets 函数读取用户输入的字符串（英文）并存储到字符数组 str1 中，
// 并利用指针，将 str1 中的字符串拷贝到字符数组 str2 中。
//

#include <stdio.h>
#include <string.h>

#define MAX 1024

int main()
{
    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;

    setbuf(stdout, 0);
    printf("input a string and store at str1:");
    fgets(str1, MAX, stdin);

    while ((*target2++ = *target1++) != '\n')
        ;

    printf("Copy complete!\n");
    printf("现在，str2 中的内容是：%s", str2);
    return 0;
}