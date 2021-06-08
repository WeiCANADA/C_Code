//C语言结构体（Struct）

// Created by ThinkPad on 2021-06-08.
//形式:
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

   // struct stu stu1, stu2; //结构体是一种数据类型，那么就可以用它来定义变量

   //成员的获取和赋值
   //结构体变量名.成员名;
   stu1.name = "Wei";
   stu1.id = 12345;
   stu1.age = 36;
   stu1.group = '1';
   stu1.score = 100;

    //读取结构体成员的值
    printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n",
           stu1.name, stu1.id, stu1.age, stu1.group, stu1.score);

    return 0;
}