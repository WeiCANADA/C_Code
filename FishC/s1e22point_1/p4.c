//
// Created by ThinkPad on 2021/5/9.
//����:
// ʹ�� fgets ���������û�����������ַ�������֧��Ӣ�ģ��� str1 �� str2 �У�
// �Ա� str1 �� str2����������ַ�����ȫһ�£���ӡ����ȫһ�¡���������ڲ�ͬ����ӡ��һ����ͬ��λ�ã������±꣩.
//

#include <stdio.h>

#define MAX 1024

int main()
{
    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;
    int index = 1;

    printf("Input the first String :");
    fgets(str1, MAX, stdin);
    printf("Input the second String :");
    fgets(str2, MAX, stdin);

    while(*target1 != '\n' && *target2 != '\n')
    {
        if(*target1++ != *target2++)
        {
            break;
        }
        index++;
    }

    if(*target1 =='\n' && *target2 =='\n')
    {
        printf("�����ַ�����ȫһ��!\n");
    } else
    {
        printf("�����ַ�����ȫһ��,��%d ���ַ����ֲ�ͬ!\n", index);
    }


    return 0;
}