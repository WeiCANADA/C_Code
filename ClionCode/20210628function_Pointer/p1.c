//
// Created by ThinkPad on 2021-07-02.

//函数指针数组

// 格式: int (*parr[10]) ()

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int (*parr[10]) () ={add, sub, mul, div, 0};

   // printf("%llu\n", sizeof(parr)/sizeof(parr[0]));
   int index = 0;
   while(parr[index] != 0)
   {
       printf("%d\n",parr[index](20,10));
       index++;
   }


    return 0;
}
