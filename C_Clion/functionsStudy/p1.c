//
// Created by ThinkPad on 2021-05-27.
//写一个函数判断一年是不是闰年

#include <stdio.h>
//是闰年返回1不是返回0
_Bool is_leap_year(int x)
{
    if(x%4==0 && x%100!= 0 || x%400==0)
    {
        return 1;
    } else
    {
        return 0;
    }
}

int  main()
{
    for (int i = 1000; i <= 2000 ; i++) {
        if(is_leap_year(i))
        {
            printf("%d,\n", i);
        }

    }
    return 0;
}

