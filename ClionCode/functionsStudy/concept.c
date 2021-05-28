//
// Created by ThinkPad on 2021-05-26.
//本章主要掌握函数的基本使用和递归
//1. 函数是什么
//2. 库函数
//3. 自定义函数
//4. 函数参数
//5. 函数调用
//6. 函数的嵌套调用和链式访问
//7. 函数的声明和定义
//8. 函数递归
//*************************************
//函数的组成:
/*ret_type fun_name(para1, * )
{
statement;//语句项
}
ret_type 返回类型
fun_name 函数名
para1 函数参数*/
//*****************************
//C语言中函数的分类：
//1. 库函数
//2. 自定
#include <stdio.h>
#include <string.h>

//求和函数
int sum(int a, int b)
{
    return a + b;
}

//交换2个变量的值
void swap1(int x, int y)
{
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}

void swap2(int* pa, int* pb)
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
int main()
{
    //库函数strcpy
/*    char str1[] ="liu000000";
    char str2[20];
    char str3[40];

    strcpy(str2, str1);
    printf("str2:%s\n", str2);
    strcpy(str2, "Stan");
    printf("str2:%s\n", str2);*/

//自定义函数
  //求和
/*    int result = sum(1 , 1);
    printf("两数之和为:%d\n", result);*/

    //swap 交换
    int a = 10;
    int b = 20;
    swap1(a, b);//内部x,y 是形参,当传入实参是时候新参就是实参的一个临时copy,所以运算并不能改变a,b的数值,不能实现a,b的转换
    printf("a = %d,b = %d \n",a, b);

    swap2(&a, &b);//内部x,y 的运算与a,b无关不能实现a,b的转换
    printf("a = %d,b = %d \n",a, b);

    return 0;
}