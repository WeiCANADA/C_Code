//
// Created by ThinkPad on 2021/5/9.
//需求:
// 使用 fgets 函数接收用户输入的两个字符串（仅支持英文）到 str1 和 str2 中，
// 对比 str1 和 str2，如果两个字符串完全一致，打印“完全一致”；如果存在不同，打印第一处不同的位置（索引下标）.
//

#include <stdio.h>

#define MAX 1024

int main()
{
    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;
    int index = 1;

    printf("Input the first String :");
    fgets(str1, MAX, stdin);
    printf("Input the second String :");
    fgets(str2, MAX, stdin);

    while(*target1 != '\n' && *target2 != '\n')
    {
        if(*target1++ != *target2++)
        {
            break;
        }
        index++;
    }

    if(*target1 =='\n' && *target2 =='\n')
    {
        printf("两个字符串完全一致!\n");
    } else
    {
        printf("两个字符串完全一致,第%d 个字符出现不同!\n", index);
    }


    return 0;
}