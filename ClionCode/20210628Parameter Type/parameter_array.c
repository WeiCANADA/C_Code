//
// Created by ThinkPad on 2021-06-28.
//
//�������

//��д�����ʱ������Ҫ�ѡ����顿���ߡ�ָ�롿�����������Ǻ����Ĳ������������أ�
#include <stdio.h>

//һά���鴫��

/*
 void test(int arr[])//ok?
{}
void test(int arr[10])//ok?
{}
void test(int *arr)//ok?
{}
void test2(int *arr[20])//ok?
{}
void test2(int **arr)//ok?
{}
 */
/*

int main()
{
    int arr[10] = { 0 };
    int *arr2[20] = { 0 };
    test(arr);
    test(arr2);
    return 0;
}*/

//**********************************************************
//��ά���鴫��
//void test(int arr[5][10])//ok?
//{}
//void test(int arr[][10])//ok?
//{}
//void test(int (*arr)[5])//ok?
//{}


//wrong form
//void test(int *arr[5])//ok?
//{}
//void test(int arr)//ok?
//{}
//void test(int **arr)//ok?
//{}
//void test(int *arr)//ok?
//{}

int main()
{
    int arr[5][10] = {0};
    test( arr);
    return 0;
}