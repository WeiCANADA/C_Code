//
// Created by ThinkPad on 2021/5/9.
//ʹ�� fgets ������ȡ�û�������ַ�����Ӣ�ģ����洢���ַ����� str1 �У�
// ������ָ�룬�� str1 �е��ַ����������ַ����� str2 �С�
//

#include <stdio.h>
#include <string.h>

#define MAX 1024

int main()
{
    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;

    setbuf(stdout, 0);
    printf("input a string and store at str1:");
    fgets(str1, MAX, stdin);

    while ((*target2++ = *target1++) != '\n')
        ;

    printf("Copy complete!\n");
    printf("���ڣ�str2 �е������ǣ�%s", str2);
    return 0;
}