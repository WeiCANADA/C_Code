//
// Created by ThinkPad on 2021-05-20.
//要求程序自动计算用户输入的字符，
// 并以最大的正方形矩阵输出（比如用户输入 17 个字符，输出 4 * 4 矩阵）
#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX 1024

int main()
{
    char str[MAX];
    printf("input str:");
    scanf("%s", &str);

    size_t length;
    length = strlen(str);
    double aver;
    aver = sqrt(length);

    //遍历
    for (int i = 0; i < aver; ++i) {
        for (int j = 0; j < aver; ++j) {
            printf("%c ", str[i*(int)aver + j]);
        }

        printf("\n");
    }


    return 0;
}
