#include <stdio.h>
#include <string.h>

//每一个好的品牌都有一个耳熟能详的 Slogan（口号）。写一个程序，让用户输入 5 句话，并计算出最长和最短的两句。
//要求 A：使用 1 个二维数组存储用户输入的 5 句话。
//?N$,o(7%fqJ8RS0taPb'
//要求 B：结果打印格式如下图。
// Created by ThinkPad on 2021/5/8.
//
#define NUM 5

int main()
{
    char slogan[NUM][100];
    int i, j, ch, min, max, temp;

    for (i = 0; i < NUM; i++)
    {
        printf("Enter the %d sentence:", i+1);
        for (j = 0; (ch = getchar()) != '\n'; j++)
        {
            slogan[i][j] = ch;
        }
        slogan[i][j] = '\0';
    }

    min = 0;
    max = min;

    printf("The  %d sentences you entered:\n", NUM);

    // 打印每句口号，同时比较长度
    for (i = 0; i < NUM; i++)
    {
        printf("%s\n", slogan[i]);
        temp = strlen(slogan[i]);
        min = temp < strlen(slogan[min]) ? i : min;
        max = temp > strlen(slogan[max]) ? i : max;
    }

    printf("The longest one:%s\n", slogan[max]);
    printf("The shortest one:%s\n", slogan[min]);

    return 0;
}
