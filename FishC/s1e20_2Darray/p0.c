//
// Created by ThinkPad on 2021/5/8.
//

#include <stdio.h>

int main()
{
    int a[4][5] ={
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15},
            {16, 17, 18, 19, 20}
    };
    int count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", a[i][j]);
            if(i + j == 3)
            {
                putchar('\n');
            }
        }
        count++;
    }
    return 0;
}