
/*
 * 我们可以使用#define 定义常量，为什么非要使用枚举？ 枚举的优点：
1. 增加代码的可读性和可维护性
2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
3. 防止了命名污染（封装）
4. 便于调试
5. 使用方便，一次可以定义多个常量
 */
// Created by Wei on 2022-01-04.
enum Color
{
    RED, YELLOW, BLUE, PINK
};

#include <stdio.h>
int main()
{
    printf("RED: % d YELLOW:% d BLUE:% d PINK:% d", RED, YELLOW, BLUE, PINK);
    //RED:  0 YELLOW: 1 BLUE: 2 PINK: 3
}
