//
// Created by ThinkPad on 2021-05-26.
//��2���������Լ��

#include <stdio.h>

int main()
{
    int m = 0, n = 0;

    printf("������2�������м��ÿո�ֿ�:\n");
    scanf("%d%d",&m, &n);

    //�������������ñ���m1��n1,��ȡ�����r
    int m1 = m, n1 = n, r = 0;
/*    while (m1%n1)
    {
        r = m1%n1;
        m1 = n1;
        n1 = r;
    }*/

//�Ż�
    while ( r=m1%n1)
    {
       // r = m1%n1;
        m1 = n1;
        n1 = r;
    }

    printf("%d �� %d �����Լ����:%d.\n",m, n, n1);

    return 0;
}