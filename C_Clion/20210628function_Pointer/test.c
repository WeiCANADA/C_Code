//
// Created by ThinkPad on 2021-06-28.

//format example : void (*pTest) () {}
//
#include <stdio.h>

/*void test()
{
    printf("hehe\n");
}
int main()
{
    printf("%p\n", test);
    printf("%p\n", &test);
    return 0;
}*/

//**********************************
//阅读两段有趣的代码：
//代码1
//  ( *( void (*)() ) 0) ();
//代码2
// void ( *signal( int , void(*)(int) ) ) (int);
//代码2可改写为下面两行代码
typedef void (*pFun_t)(int);
pFun_t signal(int pFun_t);
//signal是一个函数申明
//signal的参数有2个,第一个是int类型,第二个是函数指针,该函数指针指向函数的参数是int,返回类型是void
//signal 函数返回类型是一个函数指针,该函数指针指向的函数的参数是int,返回值是类型是void
