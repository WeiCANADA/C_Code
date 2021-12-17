//C语言结构体数组

// Created by ThinkPad on 2021-06-08.
//
//定义结构体数组
struct stu{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组
    float score;  //成绩
}class[5];

//结构体数组在定义的同时初始化
struct stu1{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组
    float score;  //成绩
}class1[5] = {
        {"张三", 0001,23 , 'A', 39},
        {"王五", 0002,22 , 'B', 49},
        {"李四", 0003,22 , 'A', 91},
        {"王麻子", 0004,21 , 'A', 97},
        {"刘大", 0005,33 , 'B', 94},
};

//当对数组中全部元素赋值时，也可不给出数组长度
struct stu2{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组
    float score;  //成绩
}class2[] = {
        {"张三", 0001,23 , 'A', 39},
        {"王五", 0002,22 , 'B', 49},
        {"李四", 0003,22 , 'A', 91},
        {"王麻子", 0004,21 , 'A', 97},
        {"刘大", 0005,33 , 'B', 94},
};


//【示例】计算全班学生的总成绩、平均成绩和以及 140 分以下的人数。

#include <stdio.h>
struct{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组
    float score;  //成绩
}class3[] = {
        {"Li ping", 5, 18, 'C', 145.0},
        {"Zhang ping", 4, 19, 'A', 130.5},
        {"He fang", 1, 18, 'A', 148.5},
        {"Cheng ling", 2, 17, 'F', 139.0},
        {"Wang ming", 3, 17, 'B', 144.5}
};
int main(){
    int i, num_140 = 0;
    float sum = 0;
    for(i=0; i<5; i++){
        sum += class3[i].score;
        if(class3[i].score < 140)
        {
            num_140++;
        }
    }
    printf("sum=%.2f\naverage=%.2f\nnum_140=%d\n", sum, sum/5, num_140);
    return 0;
}