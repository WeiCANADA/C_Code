//
// CreaThinkPad on 2021-06-29.
///����ָ��ʾ��/



#include <stdio.h>

//����һ���ӷ�����
int Add(int x, int y)
{
    return x + y;
}

//����ָ��

int main()
{
    int a = 10;
    int b = 20;

    printf("%d\n",Add(a,b));

    //����ָ�����ú���
    //����һ������ָ��ָ��ӷ�����Add
    int (*pF_Add)(int, int) = Add;

    printf("%d\n",(*pF_Add)(a,b));
    printf("%d\n",(pF_Add)(a,b));//����ָ���ĵ��ò���Ҫ������

    return 0;
}

