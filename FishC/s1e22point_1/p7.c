//
// Created by ThinkPad on 2021-05-13.
//ʵ�� strncat ���������û�������Ҫ���ӵ� str1 ��ߵ��ַ�����
// ��ע�⣺�ó�����Ҫ�ܹ���ȷ������Ӣ��ϵ��ַ�����
#include <stdio.h>

#define MAX 1024

int main()

{
    char str1[2 * MAX];
    char str2[MAX];
    char ch;
    unsigned int n;
    char *target1 = str1;
    char *target2 = str2;

    setbuf(stdout, 0);
    printf("Input the first String and store in str1:");
    fgets(str1, MAX, stdin);
    printf("Input the second String and store in str2:");
    fgets(str2, MAX, stdin);
    printf("Input how many characters do you want to catch str1:");
    scanf("%u", &n);

    //��λstr1��β��
    while (*target1++ != '\0')
        ;
    //�����ַ�'\n'��'\0'

    target1 -= 2;

    while (n--)
    {
        ch = *target1++ = *target2++;
            if(ch == '\0')
            {
                break;
            }

            if((int)ch < 0)
            {
                *target1++ = *target2++;
                *target1++ = *target2++;
            }
        }


    *target1 = '\0';
    printf("copy completed!\n");
    printf("str1: %s", str1);

    return 0;
}

