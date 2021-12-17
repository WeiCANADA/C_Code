//
// Created by ThinkPad on 2021-05-28.
//
#include "myRecursive.h"
#include <stdio.h>
#include <string.h>

int main()
{
    //接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4./
  //  myPrint(1234);


//*******************************************************
    //编写函数不允许创建临时变量，求字符串的长度。
/*    char arr[]= "bit";
    size_t strLen1 = strlen(arr);
    printf("len of %s= %zu.\n",arr, strLen1);
    int len = my_strlen(arr);
    printf("len of %s by myFunction= %d.\n",arr, len);*/

    //*******************************************
    //写函数求阶乘factorial
/*    int n = 0;
    printf("input a unsigned int:");
    scanf("%d",&n);
     int ret = myFactorial(n);
    printf("%d的阶乘为%d",n, ret);*/


//*******************************************
//Fibonacci number
//1 1 2 3 5 8 13 21 34 55
    int n = 0;
    printf("input a unsigned int:");
    scanf("%d",&n);
int ret = myFib(n);
    printf("第%d个Fibonacci number is: %d\n",n, ret);
    
    
    return 0;
}