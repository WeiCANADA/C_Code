//
// Created by ThinkPad on 2021-05-17.
//�Ƚ��ַ���

#include <stdio.h>

#define MAX 1024

int main() {
    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;

    char ch;
    int index = 1, n;

    setbuf(stdout, 0);

    printf("�������һ���ַ�����");
    fgets(str1, MAX, stdin);

    printf("������ڶ����ַ�����");
    fgets(str2, MAX, stdin);

    printf("��������Ҫ�Աȵ��ַ�������");
    scanf("%d", &n);

    while (n && *target1 != '\n' && *target2 != '\n')
    {
        ch = *target1;
        if(ch < 0)
        {
            if(*target1++ != '\n' && *target2++ != '\n'
            || *target1++ != '\n' && *target2++ != '\n')
            {
                break;
            }
        }

        if(*target1++ != '\n' && *target2++ != '\n')
        {
            break;
        }
        index++;
        n--;
    }

    if(n== 0 && *target1 == '\0' && *target2 == '\0')
    {
        printf("�����ַ�����ǰ %d ���ַ���ȫ��ͬ��\n", index);
    } else
    {
        printf("�����ַ�������ȫ��ͬ���� %d ���ַ����ֲ�ͬ��\n", index);
    }

    return 0;
    }