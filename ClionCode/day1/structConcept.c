//
// Created by ThinkPad on 2021-05-25.
//�ṹ����C�������ر���Ҫ��֪ʶ�㣬�ṹ��ʹ��C���������������������͡�
//��������ѧ����ѧ�������� ����+����+�Ա�+ѧ���⼸����Ϣ��
//����ֻ��ʹ�ýṹ���������ˡ�
#include<stdio.h>

struct Book
{
    char name[20];//C language design
    short price;//55
};

int main()
{
    struct Book b1 = {"<C language design>", 55};
    //printf("book name : %s\n", b1.name);
    //printf("book price : %d\n", b1.price);


    //use point way
    //�����"." �ṹ�����.��Ա
    struct Book* pb = &b1;
    printf("book name : %s\n", (*pb).name);
    printf("book price : %d\n", (*pb).price);


    //�����"->" �ṹ��ָ��-> ��Ա
    printf("book name : %s\n", pb ->name);
    printf("book price : %d\n", pb -> price);




    return 0;
}
