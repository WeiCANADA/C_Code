//
// Created by ThinkPad on 2021-05-28.
//
#include "myRecursive.h"
#include <stdio.h>
#include <string.h>

int main()
{
    //����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4./
  //  myPrint(1234);


//*******************************************************
    //��д��������������ʱ���������ַ����ĳ��ȡ�
/*    char arr[]= "bit";
    size_t strLen1 = strlen(arr);
    printf("len of %s= %zu.\n",arr, strLen1);
    int len = my_strlen(arr);
    printf("len of %s by myFunction= %d.\n",arr, len);*/

    //*******************************************
    //д������׳�factorial
/*    int n = 0;
    printf("input a unsigned int:");
    scanf("%d",&n);
     int ret = myFactorial(n);
    printf("%d�Ľ׳�Ϊ%d",n, ret);*/


//*******************************************
//Fibonacci number
//1 1 2 3 5 8 13 21 34 55
    int n = 0;
    printf("input a unsigned int:");
    scanf("%d",&n);
int ret = myFib(n);
    printf("��%d��Fibonacci number is: %d\n",n, ret);
    
    
    return 0;
}