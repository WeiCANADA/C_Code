//
// Created by ThinkPad on 2021-06-28.

//format example : void (*pTest) () {}
//
#include <stdio.h>

/*void test()
{
    printf("hehe\n");
}
int main()
{
    printf("%p\n", test);
    printf("%p\n", &test);
    return 0;
}*/

//**********************************
//�Ķ�������Ȥ�Ĵ��룺
//����1
//  ( *( void (*)() ) 0) ();
//����2
// void ( *signal( int , void(*)(int) ) ) (int);
//����2�ɸ�дΪ�������д���
typedef void (*pFun_t)(int);
pFun_t signal(int pFun_t);
//signal��һ����������
//signal�Ĳ�����2��,��һ����int����,�ڶ����Ǻ���ָ��,�ú���ָ��ָ�����Ĳ�����int,����������void
//signal ��������������һ������ָ��,�ú���ָ��ָ��ĺ����Ĳ�����int,����ֵ��������void
