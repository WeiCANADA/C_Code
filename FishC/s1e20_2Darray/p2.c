//
// Created by ThinkPad on 2021/5/8.
//
#include <stdio.h>

#define M 2
#define N 2
#define P 3

int main()
{
    int a[M][P] = {
            {1, 2, 3},
            {4, 5, 6},
    };

    int b[P][N] = {
            {1, 4},
            {2, 5},
            {3, 6}
    };

    int c[M][N] = {0};
    int row;

    for (int i = 0;  i < M ; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < P; k++) {
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }
     //row 取行最大值
     row = M > P ? M : P;
    for (int i = 0; i < row; ++i) {
        //print A
      printf("| ");
        for (int j = 0; j < P; ++j) {
            if( i < M)
            {
                printf("\b%d ", a[i][j]);
                printf("|");
            } else
            {
                printf("\b\b\b     ");
            }
        }
        // 打印 * 号
        if (i == row / 2)
        {
            printf(" * ");
        }
        else
        {
            printf("   ");
        }
        printf("|  ");
        // 打印B
        for (int j = 0; j < N; j++)
        {
            if (i < P)
            {
                printf("\b%d ", b[i][j]);
                printf("|");
            }
            else
            {
                printf("\b\b\b     ");
            }
        }
        // 打印 = 号
        if (i == row / 2)
        {
            printf(" = ");
        }
        else
        {
            printf("   ");
        }
        // 打印C
        printf("|  ");
        for (int j = 0; j < N; j++)
        {
            if (i < M)
            {
                printf("\b%d ", c[i][j]);
                printf("|");
            }
            else
            {
                printf("\b\b\b      ");
            }
        }
        printf("\n");
    }

    return 0;
}

