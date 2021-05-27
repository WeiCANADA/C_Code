//
// Created by ThinkPad on 2021-05-27.
//s使用函数实现判断一个数是不是素数

#include<stdio.h>

//是素数返回1,不是返回0
_Bool is_prime(int x)
{
    for (int j = 2; j < x; j++)
    {
        if (x % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    //print primes [100, 200]
    for (int i = 100; i <= 200 ; i++) {
        if(is_prime(i) == 1)
        {
            printf("%d,",i);
        }
    }
    return 0;
}

