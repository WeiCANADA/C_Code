//
// Created by ThinkPad on 2021-06-28.
//
//指针参数

//一级指针传参
#include <stdio.h>
/*void print(int *p, int sz)
{
    int i = 0;
    for(i=0; i<sz; i++)
    {
        printf("%d\n", *(p+i));
    }
}*/
/*int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int *p = arr;
    int sz = sizeof(arr)/sizeof(arr[0]);
//一级指针p，传给函数
    print(p, sz);
    return 0;
}*/

//**************************************************************
//二级指针传参

void test(int** ptr)
{
    printf("num = %d\n", **ptr);
}
int main()
{
    int n = 10;
    int*p = &n;
    int **pp = &p;
    test(pp);
    test(&p);
    return 0;
}