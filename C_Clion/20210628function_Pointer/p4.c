//
// Created by ThinkPad on 2021-07-05.
//指针和数组笔试题目解析

#include <stdio.h>
int main()
{
//一维数组
//int a[] = { 1, 2, 3, 4 };//4*4 = 16
//printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节- 16
//printf("%d\n", sizeof(a + 0));//4/8 - 数组名这里表示收元素的值，a+0 还是首元素地址，地址的大小就是4/8个字节
//printf("%d\n", sizeof(*a));   //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
//printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示收元素的值，a+1 第2个元素的地址，地址的大小就是4/8个字节
//printf("%d\n", sizeof(a[1])); //4 - 第2个元素的大小
//printf("%d\n", sizeof(&a));   //4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
//printf("%d\n", sizeof(*&a));  //16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//printf("%d\n", sizeof(&a + 1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 是第二个元素的地址

//字符数组
/*char arr[] = {'a','b','c','d','e','f'};
printf("%d\n", sizeof(arr);//6
printf("%d\n", sizeof(arr+0));//8
printf("%d\n", sizeof(*arr));//6
printf("%d\n", sizeof(arr[1]));1
printf("%d\n", sizeof(&arr));8
printf("%d\n", sizeof(&arr+1));8
printf("%d\n", sizeof(&arr[0]+1));8

printf("%d\n", strlen(arr));//随机
printf("%d\n", strlen(arr+0));//随机
printf("%d\n", strlen(*arr));//err strlen 的参数是地址,相当给传地址97
printf("%d\n", strlen(arr[1]));//err
printf("%d\n", strlen(&arr));//随机
printf("%d\n", strlen(&arr+1));//随机-6
printf("%d\n", strlen(&arr[0]+1));//随机-1*/

/*char arr[] = "abcdef";
printf("%d\n", sizeof(arr));//7
printf("%d\n", sizeof(arr+0));//8 首元素地址+0
printf("%d\n", sizeof(*arr));//1
printf("%d\n", sizeof(arr[1]));//1
printf("%d\n", sizeof(&arr));//8
printf("%d\n", sizeof(&arr+1));//8
printf("%d\n", sizeof(&arr[0]+1));//1

printf("%d\n", strlen(arr));//6
printf("%d\n", strlen(arr+0));//6
printf("%d\n", strlen(*arr));//err 6 strlen 的参数是地址,相当给传地址97
printf("%d\n", strlen(arr[1]));//err 6 strlen 的参数是地址,相当给传地址97 5
printf("%d\n", strlen(&arr));//6
printf("%d\n", strlen(&arr+1));//随机
printf("%d\n", strlen(&arr[0]+1));//5*/

/*char *p = "abcdef";
printf("%d\n", sizeof(p));//8
printf("%d\n", sizeof(p+1));//8
printf("%d\n", sizeof(*p));//1
printf("%d\n", sizeof(p[0]));//1  arr[0] == *(arr+0)   p[0] ==*(p+0)
printf("%d\n", sizeof(&p));//8
printf("%d\n", sizeof(&p+1));//随机
printf("%d\n", sizeof(&p[0]+1));//8
printf("%d\n", strlen(p));//6
printf("%d\n", strlen(p+1));//5
printf("%d\n", strlen(*p));//err
printf("%d\n", strlen(p[0]));//err
printf("%d\n", strlen(&p));//随机
printf("%d\n", strlen(&p+1));//随机
printf("%d\n", strlen(&p[0]+1));//5*/


/*//二维数组
int a[3][4] = {0};
printf("%d\n",sizeof(a));//48
printf("%d\n",sizeof(a[0][0]));//4
printf("%d\n",sizeof(a[0]));//16
printf("%d\n",sizeof(a[0]+1));//8 a[0]是第一行的数组名,数组名此时是首元素的地址,a[0]表示第一行一个元素的地址
printf("%d\n",sizeof(*(a[0]+1)));//4
printf("%d\n",sizeof(a+1));//8  第二行地址
printf("%d\n",sizeof(*(a+1)));//16
printf("%d\n",sizeof(&a[0]+1));//8
printf("%d\n",sizeof(*(&a[0]+1)));//16
printf("%d\n",sizeof(*a));//16
printf("%d\n",sizeof(a[3]));//16*/

//**************************************************************************************
//编程题目1
/*
int a[5] = {1,2,3,4,5};
int *ptr = (int *)(&a + 1);
    printf("%d,%d\n", *(a + 1), *(ptr - 1));
*/

//编程题目2

 /*   struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;
//
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
    p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);*/

	//编程题目3

/*    	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);*/

    //编程题目4
/*    int a[3][2] = {(0, 1), (2, 3), (4, 5)};
    int* pInt;
    pInt = a[0];
    printf("%d", pInt[0]);*/


// code 5

/*int a[5][5];
int (*p)[4];
p = a;
    printf("%p,%d\n",&p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);*/

//code 6
/* int aa[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int *ptr1 = (int *)(&aa + 1);
 int * ptr2 = (int *)(*(aa + 1));
    printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));*/

//code 7

/*char *a[] = {"study", "at", "UNB"};// store the address of the first letter of each words .s\a\U
char **pa = a;
pa++;

    printf("%s\n",*pa);
    printf("%s\n",*(a+1));*/

//code 8
char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};
char **cp[] = {c+3, c+2, c+1, c};
char*** cpp = cp;
printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp+3);
    printf("%s\n", *cpp[-2]+3);
    printf("%s\n", cpp[-1][-1]+1);





return 0;
}