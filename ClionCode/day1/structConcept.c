//
// Created by ThinkPad on 2021-05-25.
//结构体是C语言中特别重要的知识点，结构体使得C语言有能力描述复杂类型。
//比如描述学生，学生包含： 名字+年龄+性别+学号这几项信息。
//这里只能使用结构体来描述了。
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
    //运算符"." 结构体变量.成员
    struct Book* pb = &b1;
    printf("book name : %s\n", (*pb).name);
    printf("book price : %d\n", (*pb).price);


    //运算符"->" 结构体指针-> 成员
    printf("book name : %s\n", pb ->name);
    printf("book price : %d\n", pb -> price);




    return 0;
}
