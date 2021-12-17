//
// Created by ThinkPad on 2021-06-28.
//
//数组参数

//在写代码的时候难免要把【数组】或者【指针】传给函数，那函数的参数该如何设计呢？
#include <stdio.h>

//一维数组传参

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
//二维数组传参
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