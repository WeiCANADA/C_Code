//
// Created by ThinkPad on 2021-05-21.
//
#include <stdio.h>

int main()

{
    float pm25[3][12] = {
            {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.3, 35.5, 58.7, 49.6, 55.5},
            {59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5},
            {34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0.0, 0.0, 0.0, 0.0}
    };
    int  step;
    float min, max, data;

    // 找出最大值和最小值
    min = max = pm25[1][0];
    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 12; ++l) {

            if(pm25[k][l])
            {
                min = min < pm25[k][l]? min : pm25[k][l];
                max = max > pm25[k][l]? max : pm25[k][l];
            }

        }
    }

    // 计算步进值
    if ((int)(max - min) > 80)
    {
        step = 2;
    }
    else
    {
        step = 1;
    }

    printf("最小值: %.2f, 最大值: %.2f\n", min, max);
    // 打印直方图
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            data = pm25[i][j];
            if (data)
            {
                printf("%d年%2d月: ", i + 2014, j + 1);
                while (data >= min)
                {
                    printf("*");
                    data -= step;
                }
                printf("\n");
            }
        }
    }
    return 0;
}