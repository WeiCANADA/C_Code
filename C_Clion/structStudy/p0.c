//C���Խṹ�壨Struct��

// Created by ThinkPad on 2021-06-08.
//��ʽ:
////struct tag
//{
//    member - list;
//}variable-list;

#include <stdio.h>

int main()
{
    struct stu
    {
        char* name;
        int id;
        int age;
        char group;
        float score;
    }stu1,stu2;

   // struct stu stu1, stu2; //�ṹ����һ���������ͣ���ô�Ϳ����������������

   //��Ա�Ļ�ȡ�͸�ֵ
   //�ṹ�������.��Ա��;
   stu1.name = "Wei";
   stu1.id = 12345;
   stu1.age = 36;
   stu1.group = '1';
   stu1.score = 100;

    //��ȡ�ṹ���Ա��ֵ
    printf("%s��ѧ����%d��������%d����%c�飬����ĳɼ���%.1f��\n",
           stu1.name, stu1.id, stu1.age, stu1.group, stu1.score);

    return 0;
}