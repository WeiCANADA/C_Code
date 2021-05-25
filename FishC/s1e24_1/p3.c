//
// Created by ThinkPad on 2021-05-20.
// 编写一个程序，接收用户的输入，并将前 9 个字符以正方形矩阵（3 * 3）的方式输出。@/

#include <stdio.h>

int main()
{
    int matrix[3][3] = {0};

    //创建一个3*3的二维数组并使用getchar存入9个字符
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = getchar();
        }
    }

    //遍历
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

