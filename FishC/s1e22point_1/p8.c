//
// Created by ThinkPad on 2021-05-14.
//
#include <stdio.h>

#define MAX 1024

int main() {
    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;

    char ch;
    int index = 0, n;

    setbuf(stdout, 0);

    printf("�������һ���ַ�����");
    fgets(str1, MAX, stdin);

    printf("������ڶ����ַ�����");
    fgets(str2, MAX, stdin);

    printf("��������Ҫ�Աȵ��ַ�������");
    scanf("%d", &n);

    while (1)
    {
   ch = *target1;
   if(n == 0)
   {
       break;
   }
    if(n && *target1 != '\n' && *target2 != '\n')
    {
        if(*target1 != *target2 )
        {
            break;
        }
        target1++;
        target2++;

        if(ch < 0)
        {
            if(*target1 != *target2)
            {
                break;
            }
            target1++;
            target2++;

            if(*target1 != *target2)
            {
                break;
            }
            target1++;
            target2++;
        }

        index++;
        n--;
    }
    }

    if ((n == 0) || (*target1 == '\0' && *target2 == '\0'))
    {
        printf("�����ַ�����ǰ %d ���ַ���ȫ��ͬ��\n", index);
    }else
         {
        printf("�����ַ�������ȫ��ͬ���� %d ���ַ����ֲ�ͬ��\n", index);
         }
    return 0;
}
