//
// Created by ThinkPad on 2021-07-02.
//
//z指向函数指针数组的指针
//void (*(*pPFArr)[])()
//指向函数指针数组的指针是一个指针 指针指向一个数组，数组的元素都是函数指针;
#include <stdio.h>

void test(const char* str)
{
    printf("%s\n", str);
}


int main()
{
    //函数指针pF
    void (*pF) (const char* str) = test;

    //函数指针数组pFArr
    void (*pFArr[10]) (const char* str);
    pFArr[0] = test;

    //指向函数指针数组的指针pPFArr

    void (*(*pPFArr)[10]) (const char* str) = &pFArr;

    return 0;
}