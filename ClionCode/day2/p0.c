//
// Created by ThinkPad on 2021-05-26.
//求2个数的最大公约数

#include <stdio.h>

int main()
{
    int m = 0, n = 0;

    printf("请输入2个整数中间用空格分开:\n");
    scanf("%d%d",&m, &n);

    //定义两个计算用变量m1和n1,和取余变量r
    int m1 = m, n1 = n, r = 0;
/*    while (m1%n1)
    {
        r = m1%n1;
        m1 = n1;
        n1 = r;
    }*/

//优化
    while ( r=m1%n1)
    {
       // r = m1%n1;
        m1 = n1;
        n1 = r;
    }

    printf("%d 和 %d 的最大公约数是:%d.\n",m, n, n1);

    return 0;
}