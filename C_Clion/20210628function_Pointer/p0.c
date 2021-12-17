//
// CreaThinkPad on 2021-06-29.
///函数指针示例/



#include <stdio.h>

//定义一个加法函数
int Add(int x, int y)
{
    return x + y;
}

//函数指针

int main()
{
    int a = 10;
    int b = 20;

    printf("%d\n",Add(a,b));

    //函数指针引用函数
    //定义一个函数指针指向加法函数Add
    int (*pF_Add)(int, int) = Add;

    printf("%d\n",(*pF_Add)(a,b));
    printf("%d\n",(pF_Add)(a,b));//函数指正的调用不需要解引用

    return 0;
}

