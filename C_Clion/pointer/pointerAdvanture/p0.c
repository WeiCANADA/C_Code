//
// Created by ThinkPad on 2021-06-16.
//
#include <stdio.h>

//参数为数组的形式
void printf1(int arr[3][5], int x, int y)
{
    for (int i = 0; i < x; i++) {
        for (int k = 0; k < y; y++) {
            printf("%d ", arr[i][k]);
        }
        printf("\n");
    }
}

//参数为数组指针
void printf2(int (*p)[5], int x, int y) {
    //int (*p)[5] = &arr;
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
           // printf("%d ",p[i][j]);
           // printf("%d ",*(p[i] + j));
           // printf("%d ",(*(p + i))[j]);
            printf("%d ",*(*(p + i) + j));
        }
        printf("\n");
       // printf("%d ",*(p[i]));

    }
}

int main()
{
    /*char  arr1[] = "abcde";
    char  arr2[] = "abcde";
    //char* p1 = "abcdef";
    const char* p1 = "abcdef";
    //char* p2 = "abcdef";
    const char* p2 = "abcdef";

    if(arr1 == arr2)
    {
        printf("hehe\n");
    } else
    {
        printf("haha\n");
    }*/
    //*****************************************************************

    //指针数组

 /* 定义三个数组
  * int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int arr3[] = {3, 4, 5, 6, 7};

    定义一个指针数组parr 存储 三个数组的指针地址
    int* parr[] = {arr1, arr2, arr3};

    //遍历数组parr
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 5; ++j) {
            printf("%d ", *(parr[i] + j));
            }
        printf("\n");
    }*/

 //******************************************************************8

 //数组指针格式
/*  char arr[10] = {0};
  char (*parr)[10] =  &arr;//

  char* arrP[10];
    char* (*parrP)[10] = &arrP;*/

//*****************************************************************
//利用数组指针遍历一个一维数组
/*int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int (*parr)[10] = &arr;
    for (int i = 0; i < 10; i++) {
        printf("%d ",(*parr)[i]);
    }*/

//************************************************************************

//利用数组指针遍历一个二维数组
int arr[3][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}};
//printf1(arr, 3, 5);
    printf2(arr, 3, 5);

    return 0;
}


