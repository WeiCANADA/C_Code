//
// Created by ThinkPad on 2021-07-02.
//
//zָ����ָ�������ָ��
//void (*(*pPFArr)[])()
//ָ����ָ�������ָ����һ��ָ�� ָ��ָ��һ�����飬�����Ԫ�ض��Ǻ���ָ��;
#include <stdio.h>

void test(const char* str)
{
    printf("%s\n", str);
}


int main()
{
    //����ָ��pF
    void (*pF) (const char* str) = test;

    //����ָ������pFArr
    void (*pFArr[10]) (const char* str);
    pFArr[0] = test;

    //ָ����ָ�������ָ��pPFArr

    void (*(*pPFArr)[10]) (const char* str) = &pFArr;

    return 0;
}