//
// Created by ThinkPad on 2021-07-05.
//ָ������������Ŀ����

#include <stdio.h>
int main()
{
//һά����
//int a[] = { 1, 2, 3, 4 };//4*4 = 16
//printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
//printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//printf("%d\n", sizeof(*a));   //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
//printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
//printf("%d\n", sizeof(&a));   //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//printf("%d\n", sizeof(&a + 1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ

//�ַ�����
/*char arr[] = {'a','b','c','d','e','f'};
printf("%d\n", sizeof(arr);//6
printf("%d\n", sizeof(arr+0));//8
printf("%d\n", sizeof(*arr));//6
printf("%d\n", sizeof(arr[1]));1
printf("%d\n", sizeof(&arr));8
printf("%d\n", sizeof(&arr+1));8
printf("%d\n", sizeof(&arr[0]+1));8

printf("%d\n", strlen(arr));//���
printf("%d\n", strlen(arr+0));//���
printf("%d\n", strlen(*arr));//err strlen �Ĳ����ǵ�ַ,�൱������ַ97
printf("%d\n", strlen(arr[1]));//err
printf("%d\n", strlen(&arr));//���
printf("%d\n", strlen(&arr+1));//���-6
printf("%d\n", strlen(&arr[0]+1));//���-1*/

/*char arr[] = "abcdef";
printf("%d\n", sizeof(arr));//7
printf("%d\n", sizeof(arr+0));//8 ��Ԫ�ص�ַ+0
printf("%d\n", sizeof(*arr));//1
printf("%d\n", sizeof(arr[1]));//1
printf("%d\n", sizeof(&arr));//8
printf("%d\n", sizeof(&arr+1));//8
printf("%d\n", sizeof(&arr[0]+1));//1

printf("%d\n", strlen(arr));//6
printf("%d\n", strlen(arr+0));//6
printf("%d\n", strlen(*arr));//err 6 strlen �Ĳ����ǵ�ַ,�൱������ַ97
printf("%d\n", strlen(arr[1]));//err 6 strlen �Ĳ����ǵ�ַ,�൱������ַ97 5
printf("%d\n", strlen(&arr));//6
printf("%d\n", strlen(&arr+1));//���
printf("%d\n", strlen(&arr[0]+1));//5*/

/*char *p = "abcdef";
printf("%d\n", sizeof(p));//8
printf("%d\n", sizeof(p+1));//8
printf("%d\n", sizeof(*p));//1
printf("%d\n", sizeof(p[0]));//1  arr[0] == *(arr+0)   p[0] ==*(p+0)
printf("%d\n", sizeof(&p));//8
printf("%d\n", sizeof(&p+1));//���
printf("%d\n", sizeof(&p[0]+1));//8
printf("%d\n", strlen(p));//6
printf("%d\n", strlen(p+1));//5
printf("%d\n", strlen(*p));//err
printf("%d\n", strlen(p[0]));//err
printf("%d\n", strlen(&p));//���
printf("%d\n", strlen(&p+1));//���
printf("%d\n", strlen(&p[0]+1));//5*/


/*//��ά����
int a[3][4] = {0};
printf("%d\n",sizeof(a));//48
printf("%d\n",sizeof(a[0][0]));//4
printf("%d\n",sizeof(a[0]));//16
printf("%d\n",sizeof(a[0]+1));//8 a[0]�ǵ�һ�е�������,��������ʱ����Ԫ�صĵ�ַ,a[0]��ʾ��һ��һ��Ԫ�صĵ�ַ
printf("%d\n",sizeof(*(a[0]+1)));//4
printf("%d\n",sizeof(a+1));//8  �ڶ��е�ַ
printf("%d\n",sizeof(*(a+1)));//16
printf("%d\n",sizeof(&a[0]+1));//8
printf("%d\n",sizeof(*(&a[0]+1)));//16
printf("%d\n",sizeof(*a));//16
printf("%d\n",sizeof(a[3]));//16*/

//**************************************************************************************
//�����Ŀ1
/*
int a[5] = {1,2,3,4,5};
int *ptr = (int *)(&a + 1);
    printf("%d,%d\n", *(a + 1), *(ptr - 1));
*/

//�����Ŀ2

 /*   struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;
//
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
    p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);*/

	//�����Ŀ3

/*    	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);*/

    //�����Ŀ4
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